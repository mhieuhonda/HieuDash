extends Control
## MainMenu - man hinh chinh cua game.
## Hien logo, best score, coins, play button, settings, quit.
class_name MainMenu

@onready var best_label: Label = $Center/Panel/BestLabel
@onready var coins_label: Label = $Center/Panel/CoinsLabel
@onready var level_label: Label = $Center/Panel/LevelLabel
@onready var play_button: Button = $Center/Panel/PlayButton
@onready var settings_button: Button = $Center/Panel/SettingsButton
@onready var quit_button: Button = $Center/Panel/QuitButton
@onready var title_label: Label = $Center/Panel/TitleLabel
@onready var version_label: Label = $VersionLabel
@onready var bg_music: AudioStreamPlayer = $BgMusic


func _ready() -> void:
	GameManager.load_progress()
	_refresh_stats()
	if play_button:
		play_button.pressed.connect(_on_play)
	if settings_button:
		settings_button.pressed.connect(_on_settings)
	if quit_button:
		quit_button.pressed.connect(_on_quit)
	# An quit button tren mobile
	if OS.has_feature("mobile") or OS.has_feature("android"):
		quit_button.visible = false
	# Music
	if bg_music and GameManager.music_enabled:
		bg_music.play()
	# Animated title
	var tw := create_tween()
	tw.set_loops()
	tw.tween_property(title_label, "modulate:a", 0.85, 0.7).set_trans(Tween.TRANS_SINE)
	tw.tween_property(title_label, "modulate:a", 1.0, 0.7).set_trans(Tween.TRANS_SINE)


func _refresh_stats() -> void:
	if best_label:
		best_label.text = "Best Score: %d" % GameManager.best_score
	if coins_label:
		coins_label.text = "Total Coins: %d" % GameManager.total_coins
	if level_label:
		level_label.text = "Level %d" % GameManager.selected_level
	if version_label:
		version_label.text = "v%s" % ProjectSettings.get_setting("application/config/version", "0.1.0")


func _on_play() -> void:
	GameManager.goto("res://scenes/Game.tscn")


func _on_settings() -> void:
	GameManager.goto("res://scenes/Settings.tscn")


func _on_quit() -> void:
	GameManager.quit_game()
