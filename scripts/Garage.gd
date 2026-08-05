extends Control
## Garage - man hinh customization player.
## Mo ColoursPalette popup va AdvancedIconSelect popup.
## Port tu GDPS-Editor-22 GJGarageLayer hooks (offline-only).
class_name Garage

@onready var player_preview: Player = $Center/Panel/PlayerPreview
@onready var colors_button: Button = $Center/Panel/ColorsButton
@onready var icon_button: Button = $Center/Panel/IconButton
@onready var back_button: Button = $Center/Panel/BackButton
@onready var info_label: Label = $Center/Panel/InfoLabel

var _colours_palette: ColoursPalettePopup
var _icon_select: AdvancedIconSelectPopup


func _ready() -> void:
	if colors_button:
		colors_button.pressed.connect(_on_colors_pressed)
	if icon_button:
		icon_button.pressed.connect(_on_icon_pressed)
	if back_button:
		back_button.pressed.connect(_on_back)
	# Subscribe vao PlayerProfile changes de cap nhat preview.
	PlayerProfile.profile_changed.connect(_on_profile_changed)
	# Subscribe vao GameManager sfx de play click sound (neu co).
	_refresh_info()


func _on_colors_pressed() -> void:
	if _colours_palette == null:
		var scene := load("res://scenes/ColoursPalette.tscn")
		if scene:
			_colours_palette = scene.instantiate() as ColoursPalettePopup
			add_child(_colours_palette)
			_colours_palette.color_selected.connect(_on_color_selected)
			_colours_palette.glow_toggled.connect(_on_glow_toggled)
	if _colours_palette:
		_colours_palette.open(0)


func _on_icon_pressed() -> void:
	if _icon_select == null:
		var scene := load("res://scenes/AdvancedIconSelect.tscn")
		if scene:
			_icon_select = scene.instantiate() as AdvancedIconSelectPopup
			add_child(_icon_select)
			_icon_select.icon_selected.connect(_on_icon_selected)
	if _icon_select:
		_icon_select.open()


func _on_color_selected(slot: int, color_idx: int) -> void:
	# Slot 0 = color_1, 1 = color_2. PlayerPreview dung color_1.
	if player_preview:
		player_preview.refresh_from_profile()
	_refresh_info()


func _on_glow_toggled(enabled: bool) -> void:
	if player_preview:
		player_preview.set_glow(enabled)
	_refresh_info()


func _on_icon_selected(icon_type: int) -> void:
	if player_preview:
		player_preview.set_icon_type(icon_type)
	_refresh_info()


func _on_profile_changed() -> void:
	# Khi profile thay doi tu popup, cap nhat preview.
	if player_preview:
		player_preview.refresh_from_profile()
	_refresh_info()


func _refresh_info() -> void:
	if info_label:
		var icon_name: String = ["Cube", "Circle", "Triangle", "Diamond", "Hexagon"][PlayerProfile.icon_type]
		info_label.text = "Icon: %s\nColor 1: #%d\nGlow: %s" % [icon_name, PlayerProfile.color_1_id, "ON" if PlayerProfile.glow_enabled else "OFF"]


func _on_back() -> void:
	GameManager.goto("res://scenes/MainMenu.tscn")


func _unhandled_input(event: InputEvent) -> void:
	if event.is_action_pressed("ui_cancel"):
		_on_back()
