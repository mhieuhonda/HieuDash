extends Control
## AdvancedIconSelect - popup chon hinh dang icon cua player.
## Port tu GDPS-Editor-22 AdvancedIconSelect.cpp (offline-only, bo creator URLs).
##
## 5 icon types: Cube, Circle, Triangle, Diamond, Hexagon.
## UI: CanvasLayer > ColorRect dim > Panel 480x440 > GridContainer 5x1 icon buttons + Label creator + Close.
class_name AdvancedIconSelectPopup

signal icon_selected(icon_type: int)
signal closed

const ICON_NAMES := ["Cube", "Circle", "Triangle", "Diamond", "Hexagon"]
const ICON_DESC := [
	"Classic square cube. Default Geometry Dash style.",
	"Smooth round shape. Easy on the eyes.",
	"Sharp three-sided polygon. Edgy look.",
	"Four-pointed diamond. Symmetric and clean.",
	"Six-sided hexagon. Honeycomb aesthetic."
]

var _grid_container: GridContainer
var _desc_label: Label
var _dim: ColorRect
var _panel: Panel


func _ready() -> void:
	visible = false
	mouse_filter = Control.MOUSE_FILTER_STOP


func open() -> void:
	if not _grid_container:
		_build_ui()
	_refresh_selection()
	visible = true
	move_to_front()


func close() -> void:
	visible = false
	emit_signal("closed")


func _build_ui() -> void:
	_dim = ColorRect.new()
	_dim.color = Color(0, 0, 0, 0.6)
	_dim.set_anchors_preset(Control.PRESET_FULL_RECT)
	_dim.mouse_filter = Control.MOUSE_FILTER_STOP
	_dim.gui_input.connect(_on_dim_gui_input)
	add_child(_dim)
	
	_panel = Panel.new()
	_panel.custom_minimum_size = Vector2(520, 460)
	_panel.set_anchors_preset(Control.PRESET_CENTER)
	_panel.position = -_panel.custom_minimum_size * 0.5
	var panel_style := StyleBoxFlat.new()
	panel_style.bg_color = Color(0.08, 0.1, 0.18, 0.96)
	panel_style.border_width_left = 4
	panel_style.border_width_top = 4
	panel_style.border_width_right = 4
	panel_style.border_width_bottom = 4
	panel_style.border_color = Color(0.85, 0.32, 0.95, 0.7)
	panel_style.corner_radius_top_left = 18
	panel_style.corner_radius_top_right = 18
	panel_style.corner_radius_bottom_right = 18
	panel_style.corner_radius_bottom_left = 18
	_panel.add_theme_stylebox_override("panel", panel_style)
	add_child(_panel)
	
	# Title.
	var title := Label.new()
	title.text = "SELECT ICON"
	title.set_anchors_preset(Control.PRESET_CENTER_TOP)
	title.position = Vector2(-130, 18)
	title.size = Vector2(260, 40)
	title.horizontal_alignment = HORIZONTAL_ALIGNMENT_CENTER
	title.vertical_alignment = VERTICAL_ALIGNMENT_CENTER
	title.add_theme_color_override("font_color", Color(0.85, 0.32, 0.95, 1))
	title.add_theme_font_size_override("font_size", 28)
	_panel.add_child(title)
	
	# Grid container - 5 icon buttons in 1 row.
	_grid_container = GridContainer.new()
	_grid_container.columns = 5
	_grid_container.set_anchors_preset(Control.PRESET_CENTER_TOP)
	_grid_container.position = Vector2(-240, 80)
	_grid_container.size = Vector2(480, 200)
	_grid_container.add_theme_constant_override("h_separation", 16)
	_grid_container.add_theme_constant_override("v_separation", 16)
	_panel.add_child(_grid_container)
	
	# Build 5 icon buttons - moi button la 1 Button voi custom icon polygon.
	for i in ICON_NAMES.size():
		var btn := Button.new()
		btn.custom_minimum_size = Vector2(80, 80)
		btn.text = ""
		btn.tooltip_text = ICON_NAMES[i]
		btn.pressed.connect(_on_icon_button_pressed.bind(i))
		# Custom style.
		var style := StyleBoxFlat.new()
		style.bg_color = Color(0.18, 0.22, 0.35, 1)
		style.border_width_left = 3
		style.border_width_top = 3
		style.border_width_right = 3
		style.border_width_bottom = 3
		style.border_color = Color(0.05, 0.07, 0.15, 1)
		style.corner_radius_top_left = 10
		style.corner_radius_top_right = 10
		style.corner_radius_bottom_right = 10
		style.corner_radius_bottom_left = 10
		btn.add_theme_stylebox_override("normal", style)
		btn.add_theme_stylebox_override("hover", style)
		btn.add_theme_stylebox_override("pressed", style)
		_grid_container.add_child(btn)
		# Add icon preview as child Polygon2D... but Button is Control, not Node2D.
		# Use a TextureRect or draw via _draw. Simpler: use Label showing shape symbol.
		var shape_label := Label.new()
		shape_label.text = _shape_symbol(i)
		shape_label.set_anchors_preset(Control.PRESET_CENTER)
		shape_label.size = Vector2(80, 80)
		shape_label.horizontal_alignment = HORIZONTAL_ALIGNMENT_CENTER
		shape_label.vertical_alignment = VERTICAL_ALIGNMENT_CENTER
		shape_label.add_theme_font_size_override("font_size", 40)
		shape_label.add_theme_color_override("font_color", PlayerProfile.get_color_1())
		btn.add_child(shape_label)
		# Add small label below icon button.
		var name_label := Label.new()
		name_label.text = ICON_NAMES[i]
		name_label.set_anchors_preset(Control.PRESET_CENTER_BOTTOM)
		name_label.position = Vector2(-40, 64)
		name_label.size = Vector2(80, 16)
		name_label.horizontal_alignment = HORIZONTAL_ALIGNMENT_CENTER
		name_label.add_theme_font_size_override("font_size", 11)
		name_label.add_theme_color_override("font_color", Color(0.95, 0.95, 0.95, 0.9))
		btn.add_child(name_label)
	
	# Description label.
	_desc_label = Label.new()
	_desc_label.text = ICON_DESC[0]
	_desc_label.set_anchors_preset(Control.PRESET_CENTER_TOP)
	_desc_label.position = Vector2(-220, 300)
	_desc_label.size = Vector2(440, 60)
	_desc_label.horizontal_alignment = HORIZONTAL_ALIGNMENT_CENTER
	_desc_label.vertical_alignment = VERTICAL_ALIGNMENT_CENTER
	_desc_label.autowrap_mode = TextServer.AUTOWRAP_WORD_SMART
	_desc_label.add_theme_color_override("font_color", Color(1, 1, 1, 0.75))
	_desc_label.add_theme_font_size_override("font_size", 14)
	_panel.add_child(_desc_label)
	
	# Close button.
	var close_btn := Button.new()
	close_btn.text = "Close"
	close_btn.set_anchors_preset(Control.PRESET_CENTER_BOTTOM)
	close_btn.position = Vector2(-80, -40)
	close_btn.size = Vector2(160, 40)
	close_btn.add_theme_font_size_override("font_size", 18)
	var close_style := StyleBoxFlat.new()
	close_style.bg_color = Color(0.85, 0.32, 0.95, 1)
	close_style.border_width_left = 3
	close_style.border_width_top = 3
	close_style.border_width_right = 3
	close_style.border_width_bottom = 3
	close_style.border_color = Color(0.05, 0.07, 0.15, 1)
	close_style.corner_radius_top_left = 10
	close_style.corner_radius_top_right = 10
	close_style.corner_radius_bottom_right = 10
	close_style.corner_radius_bottom_left = 10
	close_btn.add_theme_stylebox_override("normal", close_style)
	close_btn.add_theme_stylebox_override("hover", close_style)
	close_btn.add_theme_stylebox_override("pressed", close_style)
	close_btn.add_theme_color_override("font_color", Color(0.05, 0.07, 0.15, 1))
	close_btn.pressed.connect(close)
	_panel.add_child(close_btn)


func _shape_symbol(idx: int) -> String:
	# Symbol don gian de bieu dien hinh dang (Unicode).
	match idx:
		0: return "\u25A0"  # ■ Square
		1: return "\u25CF"  # ● Circle
		2: return "\u25B2"  # ▲ Triangle
		3: return "\u25C6"  # ◆ Diamond
		4: return "\u2B22"  # ⬢ Hexagon
		_: return "\u25A0"


func _refresh_selection() -> void:
	# Update description theo icon hien tai.
	if _desc_label:
		_desc_label.text = ICON_DESC[PlayerProfile.icon_type]


func _on_icon_button_pressed(idx: int) -> void:
	PlayerProfile.set_icon_type(idx)
	if _desc_label:
		_desc_label.text = ICON_DESC[idx]
	emit_signal("icon_selected", idx)


func _on_dim_gui_input(event: InputEvent) -> void:
	if event is InputEventMouseButton and event.pressed and event.button_index == MOUSE_BUTTON_LEFT:
		close()


func _unhandled_input(event: InputEvent) -> void:
	if visible and event.is_action_pressed("ui_cancel"):
		close()
		get_viewport().set_input_as_handled()
