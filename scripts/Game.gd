extends Node2D
## Game - scene chinh cua gameplay. Chiu trach nhiem:
##   - Spawn obstacles/coins/goal dua tren LevelGenerator
##   - Cap nhat HUD, progress, score
##   - Xu ly player death / win
##   - Restart level
##   - Speedrun timer + practice mode (port tu GDPS-Editor-22)
class_name Game

@export var level_length: float = 8000.0
@export var difficulty: float = 1.0

@onready var player: Player = $Player
@onready var camera: Camera2D = $Camera
@onready var obstacles_container: Node2D = $Obstacles
@onready var floor_body: StaticBody2D = $Floor
@onready var floor_visual: Polygon2D = $FloorVisual
@onready var bg_music: AudioStreamPlayer = $BgMusic
@onready var hud: CanvasLayer = $HUD
@onready var game_over_screen: CanvasLayer = $GameOverScreen
@onready var level_complete_screen: CanvasLayer = $LevelCompleteScreen
@onready var progress_bar: ProgressBar = $HUD/TopBar/ProgressContainer/ProgressBar
@onready var attempts_label: Label = $HUD/TopBar/AttemptsLabel
@onready var coins_label: Label = $HUD/TopBar/CoinsLabel
@onready var score_label: Label = $HUD/TopBar/ScoreLabel
@onready var pause_button: Button = $HUD/TopBar/PauseButton
@onready var speedrun_timer: SpeedrunTimer = $HUD/SpeedrunTimer
@onready var practice_label: Label = $HUD/PracticeLabel
@onready var bg_layer_far: ParallaxLayer = $ParallaxBG/Far
@onready var bg_layer_mid: ParallaxLayer = $ParallaxBG/Mid
@onready var bg_layer_near: ParallaxLayer = $ParallaxBG/Near

var level_data: Dictionary = {}
var level_end_x: float = 8000.0
var is_paused: bool = false
var is_finished: bool = false
var level_seed: int = 1337  # duoc tinh tu GameManager.selected_level tai _ready

# Practice mode state
var practice_mode: bool = false
var checkpoints: Array[Vector2] = []
const MAX_CHECKPOINTS := 30

const START_X := 120.0
const START_Y := 480.0

# Cache scenes
var _spike_scene: PackedScene
var _block_scene: PackedScene
var _coin_scene: PackedScene
var _goal_scene: PackedScene
var _saw_scene: PackedScene
var _pit_scene: PackedScene
var _spike_strip_scene: PackedScene
var _bouncer_scene: PackedScene
var _crusher_scene: PackedScene
var _laser_scene: PackedScene
var _moving_platform_scene: PackedScene


func _ready() -> void:
        # Load packed scenes (co the some chua co -> bao ve bang try).
        _spike_scene = preload("res://scenes/Spike.tscn")
        _block_scene = preload("res://scenes/Block.tscn")
        _coin_scene = preload("res://scenes/Coin.tscn")
        _goal_scene = preload("res://scenes/GoalArea.tscn")
        _saw_scene = load_or_null("res://scenes/Saw.tscn")
        _pit_scene = load_or_null("res://scenes/Pit.tscn")
        _spike_strip_scene = load_or_null("res://scenes/SpikeStrip.tscn")
        _bouncer_scene = load_or_null("res://scenes/Bouncer.tscn")
        _crusher_scene = load_or_null("res://scenes/Crusher.tscn")
        _laser_scene = load_or_null("res://scenes/Laser.tscn")
        _moving_platform_scene = load_or_null("res://scenes/MovingPlatform.tscn")

        # Tinh seed tu level hien tai (fix bug: seed bi reset moi lan reload).
        level_seed = GameManager.get_level_seed()

        GameManager.reset_run()
        is_finished = false
        is_paused = false
        get_tree().paused = false

        # Practice mode init from settings.
        practice_mode = SettingsSingleton.practice_mode and SettingsSingleton.playtest_enabled
        checkpoints.clear()
        _update_practice_label()

        # FIX v0.3: HUD process_mode = ALWAYS de pause UI van hoat dong khi paused.
        hud.process_mode = Node.PROCESS_MODE_ALWAYS
        if game_over_screen:
                game_over_screen.process_mode = Node.PROCESS_MODE_ALWAYS
        if level_complete_screen:
                level_complete_screen.process_mode = Node.PROCESS_MODE_ALWAYS

        # Sinh level
        level_data = LevelGenerator.generate(level_seed, level_length, difficulty)
        level_end_x = float(level_data.get("length", level_length))

        # Spawn entities
        _spawn_entities(level_data)

        # Player setup
        player.global_position = Vector2(START_X, START_Y)
        if player.has_signal("died"):
                player.died.connect(_on_player_died)

        # Camera follow player
        camera.make_current()

        # Hook HUD signals
        GameManager.score_changed.connect(_on_score_changed)
        GameManager.coins_changed.connect(_on_coins_changed)
        attempts_label.text = "Attempt %d" % GameManager.current_attempts
        coins_label.text = "0"
        if score_label:
                score_label.text = "0"
        progress_bar.min_value = 0.0
        progress_bar.max_value = 100.0
        progress_bar.value = 0.0

        # Pause button
        if pause_button:
                pause_button.pressed.connect(_toggle_pause)
                # An pause button neu setting hide_pause_button = true.
                if SettingsSingleton.hide_pause_button:
                        pause_button.visible = false

        # Speedrun timer start
        if speedrun_timer:
                if SettingsSingleton.timer_enabled:
                        speedrun_timer.start()
                        if practice_mode:
                                speedrun_timer.mark_invalid()
                else:
                        speedrun_timer.visible = false

        # Music
        _load_bgm()
        if bg_music and GameManager.music_enabled and bg_music.stream:
                bg_music.play()

        # Hook game over / win screen buttons
        var retry_btn := game_over_screen.get_node_or_null("Panel/RetryButton")
        if retry_btn:
                retry_btn.pressed.connect(_on_retry)
        var menu_btn := game_over_screen.get_node_or_null("Panel/MenuButton")
        if menu_btn:
                menu_btn.pressed.connect(_on_back_to_menu)
        var win_retry := level_complete_screen.get_node_or_null("Panel/RetryButton")
        if win_retry:
                win_retry.pressed.connect(_on_retry)
        var win_next := level_complete_screen.get_node_or_null("Panel/NextButton")
        if win_next:
                win_next.pressed.connect(_on_next_level)
        var win_menu := level_complete_screen.get_node_or_null("Panel/MenuButton")
        if win_menu:
                win_menu.pressed.connect(_on_back_to_menu)

        game_over_screen.visible = false
        level_complete_screen.visible = false


func load_or_null(path: String) -> PackedScene:
        # Load scene neu ton tai, tra ve null neu khong (de test duoc ca khi
        # chua tao scene moi).
        if ResourceLoader.exists(path):
                return load(path) as PackedScene
        return null


func _load_bgm() -> void:
        if bg_music and ResourceLoader.exists("res://assets/sfx/bgm.wav"):
                bg_music.stream = load("res://assets/sfx/bgm.wav")


func _process(_delta: float) -> void:
        if is_paused or is_finished or player.is_dead:
                return
        # Cap nhat progress
        var p := clamp(player.global_position.x / level_end_x, 0.0, 1.0) * 100.0
        progress_bar.value = p
        # Win fallback: neu vuot qua cuoi level ma chua hit goal.
        if player.global_position.x >= level_end_x and not is_finished:
                _on_player_win()
        # Auto checkpoint trong practice mode.
        if practice_mode and SettingsSingleton.auto_checkpoint:
                _maybe_auto_checkpoint()


func _maybe_auto_checkpoint() -> void:
        # Them checkpoint moi 400px (practice mode).
        var last_x := checkpoints[-1].x if checkpoints.size() > 0 else START_X
        if player.global_position.x - last_x > 400.0 and player.is_grounded and not player.is_dead:
                checkpoints.append(player.global_position)
                if checkpoints.size() > MAX_CHECKPOINTS:
                        checkpoints.pop_front()


func _spawn_entities(data: Dictionary) -> void:
        var entities: Array = data.get("entities", [])
        for ent in entities:
                var type: String = ent.get("type", "")
                var x: float = float(ent.get("x", 0.0))
                var y: float = float(ent.get("y", 0.0))
                match type:
                        "spike":
                                var s: Spike = _spike_scene.instantiate()
                                obstacles_container.add_child(s)
                                s.global_position = Vector2(x, y)
                        "block":
                                var b: Block = _block_scene.instantiate()
                                obstacles_container.add_child(b)
                                b.global_position = Vector2(x, y)
                                # Hien thi chieu cao (1 hoac 2 tang).
                                var h: int = int(ent.get("h", 1))
                                b.set_meta("stack_height", h)
                        "coin":
                                var c: Coin = _coin_scene.instantiate()
                                obstacles_container.add_child(c)
                                c.global_position = Vector2(x, y)
                        "goal":
                                var g: GoalArea = _goal_scene.instantiate()
                                obstacles_container.add_child(g)
                                g.global_position = Vector2(x, y)
                                g.reached.connect(_on_player_win)
                        "saw":
                                if _saw_scene:
                                        var sw: Saw = _saw_scene.instantiate()
                                        obstacles_container.add_child(sw)
                                        sw.global_position = Vector2(x, y)
                        "pit":
                                if _pit_scene:
                                        var pt: Pit = _pit_scene.instantiate()
                                        obstacles_container.add_child(pt)
                                        pt.global_position = Vector2(x, y)
                                        pt.set_width(float(ent.get("w", 120.0)))
                        "spike_strip":
                                if _spike_strip_scene:
                                        var ss: SpikeStrip = _spike_strip_scene.instantiate()
                                        obstacles_container.add_child(ss)
                                        ss.global_position = Vector2(x, y)
                                        ss.set_count(int(ent.get("count", 4)))
                        "bouncer":
                                if _bouncer_scene:
                                        var bn: Bouncer = _bouncer_scene.instantiate()
                                        obstacles_container.add_child(bn)
                                        bn.global_position = Vector2(x, y)
                        "crusher":
                                if _crusher_scene:
                                        var cr: Crusher = _crusher_scene.instantiate()
                                        obstacles_container.add_child(cr)
                                        cr.global_position = Vector2(x, y)
                                        cr.set_period(float(ent.get("period", 2.0)))
                        "laser":
                                if _laser_scene:
                                        var ls: Laser = _laser_scene.instantiate()
                                        obstacles_container.add_child(ls)
                                        ls.global_position = Vector2(x, y)
                                        ls.set_period(float(ent.get("period", 2.0)))
                        "moving_platform":
                                if _moving_platform_scene:
                                        var mp: MovingPlatform = _moving_platform_scene.instantiate()
                                        obstacles_container.add_child(mp)
                                        mp.global_position = Vector2(x, y)
                                        mp.configure(
                                                float(ent.get("range", 200.0)),
                                                float(ent.get("speed", 100.0)),
                                                String(ent.get("axis", "x"))
                                        )


func _on_player_died() -> void:
        # Hien game over sau delay nho de xem particle
        if is_finished:
                return
        # FIX v0.3: Neu ignore_damage = true, ignore death.
        if SettingsSingleton.ignore_damage:
                # Respawn player tai checkpoint gan nhat.
                _respawn_at_checkpoint()
                return
        # Stop speedrun timer.
        if speedrun_timer:
                speedrun_timer.stop()
        is_finished = true
        if bg_music:
                bg_music.stop()
        await get_tree().create_timer(0.9, false).timeout
        GameManager.commit_run_to_save()
        game_over_screen.visible = true
        # Cap nhat best score/coins
        var best_label := game_over_screen.get_node_or_null("Panel/BestLabel")
        if best_label:
                best_label.text = "Best: %d" % GameManager.best_score
        var go_score := game_over_screen.get_node_or_null("Panel/ScoreLabel")
        if go_score:
                go_score.text = "Score: %d" % GameManager.current_score
        var go_coins := game_over_screen.get_node_or_null("Panel/CoinsLabel")
        if go_coins:
                go_coins.text = "Coins: %d" % GameManager.current_coins


func _respawn_at_checkpoint() -> void:
        # Respawn player tai checkpoint gan nhat (practice mode hoac ignore_damage).
        if checkpoints.size() > 0:
                player.global_position = checkpoints[-1]
        else:
                player.global_position = Vector2(START_X, START_Y)
        # Reset player state.
        player.is_dead = false
        player.velocity = Vector2.ZERO
        if player.collision:
                player.collision.set_deferred("disabled", false)
        if player.sprite:
                player.sprite.visible = true
        if player.outline:
                player.outline.visible = true


func _on_player_win() -> void:
        if is_finished:
                return
        is_finished = true
        if speedrun_timer:
                speedrun_timer.stop()
        if bg_music:
                bg_music.stop()
        # Add completion bonus + register completion
        GameManager.add_score(GameManager.COMPLETION_BONUS)
        GameManager.register_completion()
        GameManager.commit_run_to_save()
        level_complete_screen.visible = true
        var lbl := level_complete_screen.get_node_or_null("Panel/CoinsLabel")
        if lbl:
                lbl.text = "Coins: %d" % GameManager.current_coins
        var win_score := level_complete_screen.get_node_or_null("Panel/ScoreLabel")
        if win_score:
                win_score.text = "Score: %d" % GameManager.current_score


func _toggle_pause() -> void:
        if is_finished:
                return
        is_paused = not is_paused
        get_tree().paused = is_paused
        var pause_overlay := hud.get_node_or_null("PauseOverlay")
        if pause_overlay:
                pause_overlay.visible = is_paused
        if bg_music:
                bg_music.stream_paused = is_paused
        # FIX v0.3: Pause danh dau speedrun timer invalid (lan thu nay khong hop le).
        if is_paused and speedrun_timer and not is_finished:
                speedrun_timer.mark_invalid()
        # Hook pause overlay buttons (connect 1 lan duy nhat)
        if is_paused and pause_overlay:
                var resume_btn := pause_overlay.get_node_or_null("ResumeButton")
                if resume_btn and not resume_btn.pressed.is_connected(_toggle_pause):
                        resume_btn.pressed.connect(_toggle_pause)
                var restart_btn := pause_overlay.get_node_or_null("RestartButton")
                if restart_btn and not restart_btn.pressed.is_connected(_on_retry):
                        restart_btn.pressed.connect(_on_retry)
                var quit_btn := pause_overlay.get_node_or_null("MenuButton")
                if quit_btn and not quit_btn.pressed.is_connected(_on_back_to_menu):
                        quit_btn.pressed.connect(_on_back_to_menu)
                # Page 2 (extra settings) - port tu GDPS-Editor-22 PauseLayer 2 pages.
                var next_page_btn := pause_overlay.get_node_or_null("Panel/NextPageButton")
                if next_page_btn and not next_page_btn.pressed.is_connected(_toggle_pause_page):
                        next_page_btn.pressed.connect(_toggle_pause_page)
                var prev_page_btn := pause_overlay.get_node_or_null("Panel2/PrevPageButton")
                if prev_page_btn and not prev_page_btn.pressed.is_connected(_toggle_pause_page):
                        prev_page_btn.pressed.connect(_toggle_pause_page)


func _toggle_pause_page() -> void:
        # Switch giua 2 page cua pause overlay.
        var pause_overlay := hud.get_node_or_null("PauseOverlay")
        if not pause_overlay:
                return
        var page1 := pause_overlay.get_node_or_null("Panel")
        var page2 := pause_overlay.get_node_or_null("Panel2")
        if page1 and page2:
                page1.visible = not page1.visible
                page2.visible = not page2.visible


func _update_practice_label() -> void:
        if practice_label:
                if practice_mode:
                        practice_label.text = "PRACTICE MODE"
                        practice_label.visible = true
                else:
                        practice_label.visible = false


func _on_score_changed(score: int) -> void:
        if score_label:
                score_label.text = str(score)


func _on_coins_changed(coins: int) -> void:
        coins_label.text = str(coins)


func _on_retry() -> void:
        # Reload scene
        is_paused = false
        get_tree().paused = false
        get_tree().reload_current_scene()


func _on_back_to_menu() -> void:
        is_paused = false
        get_tree().paused = false
        GameManager.goto("res://scenes/MainMenu.tscn")


func _on_next_level() -> void:
        # Tang level va replay voi seed moi (duoc tinh tu selected_level).
        GameManager.advance_level()
        get_tree().reload_current_scene()


func _unhandled_input(event: InputEvent) -> void:
        if event.is_action_pressed("ui_cancel"):
                _toggle_pause()
        # Practice mode toggle (P key).
        if event.is_action_pressed("practice_toggle") and SettingsSingleton.playtest_enabled:
                practice_mode = not practice_mode
                SettingsSingleton.practice_mode = practice_mode
                SettingsSingleton.save_settings()
                _update_practice_label()
                if speedrun_timer and practice_mode:
                        speedrun_timer.mark_invalid()
                get_viewport().set_input_as_handled()
