extends Node2D
## Game - scene chinh cua gameplay. Chiu trach nhiem:
##   - Spawn obstacles/coins/goal dua tren LevelGenerator
##   - Cap nhat HUD, progress
##   - Xu ly player death / win
##   - Restart level
class_name Game

@export var level_seed: int = 1337
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
@onready var pause_button: Button = $HUD/TopBar/PauseButton
@onready var bg_layer_far: ParallaxLayer = $ParallaxBG/Far
@onready var bg_layer_mid: ParallaxLayer = $ParallaxBG/Mid
@onready var bg_layer_near: ParallaxLayer = $ParallaxBG/Near

var level_data: Dictionary = {}
var level_end_x: float = 8000.0
var is_paused: bool = false
var is_finished: bool = false

const START_X := 120.0
const START_Y := 480.0

# Cache scenes
var _spike_scene: PackedScene
var _block_scene: PackedScene
var _coin_scene: PackedScene
var _goal_scene: PackedScene


func _ready() -> void:
	# Load packed scenes
	_spike_scene = preload("res://scenes/Spike.tscn")
	_block_scene = preload("res://scenes/Block.tscn")
	_coin_scene = preload("res://scenes/Coin.tscn")
	_goal_scene = preload("res://scenes/GoalArea.tscn")

	GameManager.reset_run()
	is_finished = false
	is_paused = false
	get_tree().paused = false

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
	camera.position_smoothing_enabled = true
	camera.position_smoothing_speed = 8.0
	camera.make_current()

	# Hook HUD signals
	GameManager.score_changed.connect(_on_score_changed)
	GameManager.coins_changed.connect(_on_coins_changed)
	attempts_label.text = "Attempt %d" % GameManager.current_attempts
	coins_label.text = "0"
	progress_bar.min_value = 0.0
	progress_bar.max_value = 100.0
	progress_bar.value = 0.0

	# Pause button
	if pause_button:
		pause_button.pressed.connect(_toggle_pause)

	# Music
	if bg_music and GameManager.music_enabled:
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


func _process(_delta: float) -> void:
	if is_paused or is_finished or player.is_dead:
		return
	# Cap nhat progress
	var p := clamp(player.global_position.x / level_end_x, 0.0, 1.0) * 100.0
	progress_bar.value = p
	# Stop music near end
	if player.global_position.x >= level_end_x and not is_finished:
		_on_player_win()


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
			"coin":
				var c: Coin = _coin_scene.instantiate()
				obstacles_container.add_child(c)
				c.global_position = Vector2(x, y)
			"goal":
				var g: GoalArea = _goal_scene.instantiate()
				obstacles_container.add_child(g)
				g.global_position = Vector2(x, y)
				g.reached.connect(_on_player_win)


func _on_player_died() -> void:
	# Hien game over sau delay nho de xem particle
	if is_finished:
		return
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


func _on_player_win() -> void:
	if is_finished:
		return
	is_finished = true
	if bg_music:
		bg_music.stop()
	# Add completion bonus
	GameManager.add_score(1000)
	GameManager.commit_run_to_save()
	level_complete_screen.visible = true
	var lbl := level_complete_screen.get_node_or_null("Panel/CoinsLabel")
	if lbl:
		lbl.text = "Coins: %d" % GameManager.current_coins


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
	# Hook pause overlay buttons
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


func _on_score_changed(score: int) -> void:
	# Tu cap nhat score HUD neu co
	pass


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
	# Tang level va replay voi seed moi
	GameManager.selected_level += 1
	level_seed = 1337 + GameManager.selected_level * 7
	get_tree().reload_current_scene()


func _unhandled_input(event: InputEvent) -> void:
	if event.is_action_pressed("ui_cancel"):
		_toggle_pause()
