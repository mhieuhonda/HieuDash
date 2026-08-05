extends Control
## Credits - man hinh credit, offline-only (khong co URL/online).
## Port tu GDPS-Editor-22 CreditsLayer.cpp, nhung thay URL bang thong tin text.
class_name Credits

@onready var back_button: Button = $Center/Panel/BackButton
@onready var credit_label: Label = $Center/Panel/CreditLabel


func _ready() -> void:
	if back_button:
		back_button.pressed.connect(_on_back)
	if credit_label:
		credit_label.text = _build_credits_text()


func _build_credits_text() -> String:
	var version := ProjectSettings.get_setting("application/config/version", "0.3.0")
	return """HIEU DASH v%s

=== PROJECT ===
Lead Developer: mhieuhonda
Engine: Godot 4.7
Language: GDScript
Renderer: gl_compatibility

=== GAMEPLAY ===
Inspired by: Geometry Dash (by RobTop Games)
Game Mode: Auto-runner / Cube-jumping
Features: 11 obstacle types, procedural levels,
practice mode, color palette, icon select,
speedrun timer, advanced settings.

=== ASSETS ===
Audio: Procedurally generated WAV files
Icons: Custom PNG icons
Color Palette: 106 colors (port from GDPS-Editor)

=== TOOLING ===
CI/CD: GitHub Actions
Export: Android, Linux, Windows
Build: Godot 4.7-stable + export templates

=== ACKNOWLEDGEMENTS ===
GDPS-Editor-22 (iAndyHD3) - reference implementation
For feature ideas: ColoursPalette, AdvancedIconSelect,
ObjectOptionsLayer, AdvancedOptionsLayer, SpeedrunTimer,
PauseLayer 2-page, SettingsSingleton, ColorPalette.

=== LICENSE ===
See LICENSE file in repository.

=== COPYRIGHT ===
Copyright (c) 2026 Hieu Dash Project
""" % version


func _on_back() -> void:
	GameManager.goto("res://scenes/MainMenu.tscn")


func _unhandled_input(event: InputEvent) -> void:
	if event.is_action_pressed("ui_cancel"):
		_on_back()
