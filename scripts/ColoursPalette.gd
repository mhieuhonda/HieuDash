extends Control
## ColoursPalette - popup chon mau Player Color1/Color2 + Glow toggle.
## Port tu GDPS-Editor-22 ColoursPalette.cpp (offline-only).
##
## UI: CanvasLayer > ColorRect dim > Panel 450x520 > GridContainer 6x18 chua
## 106 ColorButton + 3 toggle buttons (Color1/Color2/Glow) + Close button.
class_name ColoursPalettePopup

signal color_selected(slot: int, color_idx: int)
signal glow_toggled(enabled: bool)
signal closed

const COLS := 8
const ROWS := 14  # 8x14 = 112 (>= 106)
const BUTTON_SIZE := 32
const BUTTON_GAP := 4

var _current_slot: int = 0  # 0 = color_1, 1 = color_2
var _grid_container: GridContainer
var _slot_1_button: Button
var _slot_2_button: Button
var _glow_check: CheckBox
var _preview_rect: ColorRect
var _dim: ColorRect
var _panel: Panel


func _ready() -> void:
        # Tat input processing khi chua show.
        visible = false
        mouse_filter = Control.MOUSE_FILTER_STOP


func open(initial_slot: int = 0) -> void:
        _current_slot = clamp(initial_slot, 0, 1)
        if not _grid_container:
                _build_ui()
        _refresh_selection()
        visible = true
        # Bring to front.
        move_to_front()


func close() -> void:
        visible = false
        emit_signal("closed")


func _build_ui() -> void:
        # Dim background.
        _dim = ColorRect.new()
        _dim.color = Color(0, 0, 0, 0.6)
        _dim.set_anchors_preset(Control.PRESET_FULL_RECT)
        _dim.mouse_filter = Control.MOUSE_FILTER_STOP
        _dim.gui_input.connect(_on_dim_gui_input)
        add_child(_dim)
        
        # Panel.
        _panel = Panel.new()
        _panel.custom_minimum_size = Vector2(520, 580)
        _panel.set_anchors_preset(Control.PRESET_CENTER)
        _panel.position = -_panel.custom_minimum_size * 0.5
        var panel_style := StyleBoxFlat.new()
        panel_style.bg_color = Color(0.08, 0.1, 0.18, 0.96)
        panel_style.border_width_left = 4
        panel_style.border_width_top = 4
        panel_style.border_width_right = 4
        panel_style.border_width_bottom = 4
        panel_style.border_color = Color(0.25, 0.85, 1, 0.7)
        panel_style.corner_radius_top_left = 18
        panel_style.corner_radius_top_right = 18
        panel_style.corner_radius_bottom_right = 18
        panel_style.corner_radius_bottom_left = 18
        _panel.add_theme_stylebox_override("panel", panel_style)
        add_child(_panel)
        
        # Title.
        var title := Label.new()
        title.text = "COLOR PALETTE"
        title.set_anchors_preset(Control.PRESET_CENTER_TOP)
        title.position = Vector2(-130, 18)
        title.size = Vector2(260, 40)
        title.horizontal_alignment = HORIZONTAL_ALIGNMENT_CENTER
        title.vertical_alignment = VERTICAL_ALIGNMENT_CENTER
        title.add_theme_color_override("font_color", Color(0.25, 0.85, 1, 1))
        title.add_theme_font_size_override("font_size", 28)
        _panel.add_child(title)
        
        # Slot buttons row.
        var slot_row := HBoxContainer.new()
        slot_row.set_anchors_preset(Control.PRESET_CENTER_TOP)
        slot_row.position = Vector2(-200, 70)
        slot_row.size = Vector2(400, 40)
        slot_row.alignment = BoxContainer.ALIGNMENT_CENTER
        slot_row.add_theme_constant_override("separation", 12)
        _panel.add_child(slot_row)
        
        _slot_1_button = Button.new()
        _slot_1_button.text = "Color 1"
        _slot_1_button.custom_minimum_size = Vector2(120, 36)
        _slot_1_button.add_theme_font_size_override("font_size", 16)
        _slot_1_button.pressed.connect(_on_slot_1_pressed)
        slot_row.add_child(_slot_1_button)
        
        _slot_2_button = Button.new()
        _slot_2_button.text = "Color 2"
        _slot_2_button.custom_minimum_size = Vector2(120, 36)
        _slot_2_button.add_theme_font_size_override("font_size", 16)
        _slot_2_button.pressed.connect(_on_slot_2_pressed)
        slot_row.add_child(_slot_2_button)
        
        _glow_check = CheckBox.new()
        _glow_check.text = "Glow"
        _glow_check.custom_minimum_size = Vector2(120, 36)
        _glow_check.add_theme_font_size_override("font_size", 16)
        _glow_check.button_pressed = PlayerProfile.glow_enabled
        _glow_check.toggled.connect(_on_glow_toggled)
        slot_row.add_child(_glow_check)

        # Preview rect.
        _preview_rect = ColorRect.new()
        _preview_rect.set_anchors_preset(Control.PRESET_CENTER_TOP)
        _preview_rect.position = Vector2(-40, 116)
        _preview_rect.size = Vector2(80, 32)
        _preview_rect.color = PlayerProfile.color_1
        _panel.add_child(_preview_rect)
        
        # Scroll container for color grid.
        var scroll := ScrollContainer.new()
        scroll.set_anchors_preset(Control.PRESET_CENTER_TOP)
        scroll.position = Vector2(-220, 158)
        scroll.size = Vector2(440, 340)
        scroll.horizontal_scroll_mode = ScrollContainer.SCROLL_MODE_DISABLED
        _panel.add_child(scroll)
        
        # Grid container.
        _grid_container = GridContainer.new()
        _grid_container.columns = COLS
        _grid_container.add_theme_constant_override("h_separation", BUTTON_GAP)
        _grid_container.add_theme_constant_override("v_separation", BUTTON_GAP)
        scroll.add_child(_grid_container)
        
        # Build 106 color buttons.
        for i in HDColorPalette.COLORS.size():
                var btn := Button.new()
                btn.custom_minimum_size = Vector2(BUTTON_SIZE, BUTTON_SIZE)
                btn.size = Vector2(BUTTON_SIZE, BUTTON_SIZE)
                btn.text = ""
                var c: Color = HDColorPalette.color_for_idx(i)
                var style := StyleBoxFlat.new()
                style.bg_color = c
                style.corner_radius_top_left = 4
                style.corner_radius_top_right = 4
                style.corner_radius_bottom_right = 4
                style.corner_radius_bottom_left = 4
                btn.add_theme_stylebox_override("normal", style)
                btn.add_theme_stylebox_override("hover", style)
                btn.add_theme_stylebox_override("pressed", style)
                btn.add_theme_stylebox_override("focus", style)
                btn.tooltip_text = "Color %d" % i
                btn.pressed.connect(_on_color_button_pressed.bind(i))
                _grid_container.add_child(btn)
        
        # Close button.
        var close_btn := Button.new()
        close_btn.text = "Close"
        close_btn.set_anchors_preset(Control.PRESET_CENTER_BOTTOM)
        close_btn.position = Vector2(-80, -50)
        close_btn.size = Vector2(160, 40)
        close_btn.add_theme_font_size_override("font_size", 18)
        var close_style := StyleBoxFlat.new()
        close_style.bg_color = Color(0.25, 0.85, 1, 1)
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


func _refresh_selection() -> void:
        # Update preview rect color theo slot hien tai.
        if _preview_rect:
                _preview_rect.color = PlayerProfile.color_1 if _current_slot == 0 else PlayerProfile.color_2
        # Update slot button styles.
        var active_style := StyleBoxFlat.new()
        active_style.bg_color = Color(0.25, 0.85, 1, 1)
        active_style.border_width_left = 3
        active_style.border_width_top = 3
        active_style.border_width_right = 3
        active_style.border_width_bottom = 3
        active_style.border_color = Color(1, 1, 1, 1)
        active_style.corner_radius_top_left = 8
        active_style.corner_radius_top_right = 8
        active_style.corner_radius_bottom_right = 8
        active_style.corner_radius_bottom_left = 8
        
        var inactive_style := StyleBoxFlat.new()
        inactive_style.bg_color = Color(0.18, 0.22, 0.35, 1)
        inactive_style.border_width_left = 3
        inactive_style.border_width_top = 3
        inactive_style.border_width_right = 3
        inactive_style.border_width_bottom = 3
        inactive_style.border_color = Color(0.05, 0.07, 0.15, 1)
        inactive_style.corner_radius_top_left = 8
        inactive_style.corner_radius_top_right = 8
        inactive_style.corner_radius_bottom_right = 8
        inactive_style.corner_radius_bottom_left = 8
        
        if _slot_1_button:
                _slot_1_button.add_theme_stylebox_override("normal", active_style if _current_slot == 0 else inactive_style)
                _slot_1_button.add_theme_stylebox_override("hover", active_style if _current_slot == 0 else inactive_style)
                _slot_1_button.add_theme_color_override("font_color", Color(0.05, 0.07, 0.15, 1) if _current_slot == 0 else Color(0.95, 0.95, 0.95, 1))
        if _slot_2_button:
                _slot_2_button.add_theme_stylebox_override("normal", active_style if _current_slot == 1 else inactive_style)
                _slot_2_button.add_theme_stylebox_override("hover", active_style if _current_slot == 1 else inactive_style)
                _slot_2_button.add_theme_color_override("font_color", Color(0.05, 0.07, 0.15, 1) if _current_slot == 1 else Color(0.95, 0.95, 0.95, 1))


func _on_slot_1_pressed() -> void:
        _current_slot = 0
        _refresh_selection()


func _on_slot_2_pressed() -> void:
        _current_slot = 1
        _refresh_selection()


func _on_glow_toggled(pressed: bool) -> void:
        PlayerProfile.set_glow(pressed)
        emit_signal("glow_toggled", pressed)


func _on_color_button_pressed(idx: int) -> void:
        if _current_slot == 0:
                PlayerProfile.set_color_1(idx)
        else:
                PlayerProfile.set_color_2(idx)
        emit_signal("color_selected", _current_slot, idx)
        _refresh_selection()


func _on_dim_gui_input(event: InputEvent) -> void:
        # Click vao dim (ngoai panel) -> close.
        if event is InputEventMouseButton and event.pressed and event.button_index == MOUSE_BUTTON_LEFT:
                close()


func _unhandled_input(event: InputEvent) -> void:
        if visible and event.is_action_pressed("ui_cancel"):
                close()
                get_viewport().set_input_as_handled()
