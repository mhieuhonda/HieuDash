extends Control
## Settings - man hinh cai dat.
class_name Settings

@onready var music_check: CheckBox = $Center/Panel/MusicCheck
@onready var sfx_check: CheckBox = $Center/Panel/SfxCheck
@onready var reduced_motion_check: CheckBox = $Center/Panel/ReducedMotionCheck
@onready var back_button: Button = $Center/Panel/BackButton
@onready var reset_button: Button = $Center/Panel/ResetButton
@onready var about_label: Label = $Center/Panel/AboutLabel


func _ready() -> void:
	music_check.button_pressed = GameManager.music_enabled
	sfx_check.button_pressed = GameManager.sfx_enabled
	reduced_motion_check.button_pressed = GameManager.reduced_motion
	music_check.toggled.connect(_on_music_toggled)
	sfx_check.toggled.connect(_on_sfx_toggled)
	reduced_motion_check.toggled.connect(_on_reduced_motion_toggled)
	back_button.pressed.connect(_on_back)
	reset_button.pressed.connect(_on_reset)
	if about_label:
		about_label.text = "Hieu Dash v%s\nBuilt with Godot 4.7\n© 2026 Hieu Dash Project" % ProjectSettings.get_setting("application/config/version", "0.1.0")


func _on_music_toggled(pressed: bool) -> void:
	GameManager.music_enabled = pressed
	GameManager.save_progress()


func _on_sfx_toggled(pressed: bool) -> void:
	GameManager.sfx_enabled = pressed
	GameManager.save_progress()


func _on_reduced_motion_toggled(pressed: bool) -> void:
	GameManager.reduced_motion = pressed
	GameManager.save_progress()


func _on_back() -> void:
	GameManager.goto("res://scenes/MainMenu.tscn")


func _on_reset() -> void:
	GameManager.best_score = 0
	GameManager.total_coins = 0
	GameManager.total_attempts = 0
	GameManager.total_deaths = 0
	GameManager.total_jumps = 0
	GameManager.selected_level = 1
	GameManager.save_progress()
	GameManager.goto("res://scenes/Settings.tscn")
