extends Control
## AdvancedSettings - man hinh cai dat nang cao.
## Port tu GDPS-Editor-22 advancedOptionsLayer.cpp + GDPS Settings layer.
## Offline-only - 10 toggle object properties + advanced gameplay toggles.
class_name AdvancedSettings

@onready var back_button: Button = $Center/Panel/BackButton
@onready var reset_button: Button = $Center/Panel/ResetButton
@onready var scroll_container: ScrollContainer = $Center/Panel/ScrollContainer
@onready var toggles_vbox: VBoxContainer = $Center/Panel/ScrollContainer/TogglesVBox


func _ready() -> void:
	if back_button:
		back_button.pressed.connect(_on_back)
	if reset_button:
		reset_button.pressed.connect(_on_reset)
	_build_toggles()


func _build_toggles() -> void:
	# Danh sach toggle: [key, label, description]
	# Group 1: Object Properties (port tu ObjectOptionsLayer)
	var sections := [
		{
			"title": "OBJECT PROPERTIES",
			"toggles": [
				["smooth_fix", "Smooth Fix", "Smooth physics interpolation"],
				["ignore_damage", "Ignore Damage", "Immortal mode (debug only)"],
				["draw_trigger_boxes", "Draw Trigger Boxes", "Show trigger collision boxes (debug)"],
				["debug_draw", "Debug Draw", "Show all collision shapes (debug)"],
				["effect_lines", "Effect Lines", "Show effect lines in editor"],
				["toggle_editor_grid", "Editor Grid", "Show grid in editor"],
				["toggle_effect_duration", "Effect Duration", "Show effect duration labels"],
				["has_color", "Has Color", "Enable color picker in editor"],
				["toggle_editor_bg", "Editor Background", "Show editor background"],
				["hide_grid", "Hide Grid", "Hide grid lines (cleaner look)"],
			]
		},
		{
			"title": "GAMEPLAY",
			"toggles": [
				["playtest_enabled", "Practice Mode", "Enable practice mode (P key)"],
				["auto_checkpoint", "Auto Checkpoint", "Auto-place checkpoints in practice"],
				["show_level_info", "Level Info", "Show level info on start"],
				["disable_linked_objects", "Disable Linked", "Disable linked objects (debug)"],
				["show_editor_shortcut", "Editor Shortcut", "Show editor shortcut button"],
				["high_capacity_mode", "High Capacity", "Enable high-capacity mode (more objects)"],
				["layer_locking", "Layer Locking", "Lock layers in editor"],
				["record_order", "Record Order", "Record object placement order"],
			]
		},
		{
			"title": "DISPLAY",
			"toggles": [
				["timer_enabled", "Speedrun Timer", "Show speedrun timer in HUD"],
				["hide_pause_button", "Hide Pause", "Hide pause button (use ESC)"],
				["alt_touch_layout", "Alt Touch Layout", "Alternative touch layout (mobile)"],
				["follow_player", "Follow Player", "Camera follows player"],
			]
		},
	]
	
	for section in sections:
		# Section title.
		var section_label := Label.new()
		section_label.text = section["title"]
		section_label.add_theme_color_override("font_color", Color(0.25, 0.85, 1, 1))
		section_label.add_theme_font_size_override("font_size", 18)
		section_label.custom_minimum_size = Vector2(440, 32)
		toggles_vbox.add_child(section_label)
		
		# Toggles in section.
		for toggle_data in section["toggles"]:
			var key: String = toggle_data[0]
			var label_text: String = toggle_data[1]
			var desc_text: String = toggle_data[2]
			
			var row := HBoxContainer.new()
			row.custom_minimum_size = Vector2(440, 36)
			row.add_theme_constant_override("separation", 8)
			toggles_vbox.add_child(row)
			
			var check := CheckButton.new()
			check.text = label_text
			check.button_pressed = bool(SettingsSingleton.get(key))
			check.add_theme_font_size_override("font_size", 14)
			check.custom_minimum_size = Vector2(220, 32)
			check.toggled.connect(_on_toggle_changed.bind(key))
			row.add_child(check)
			
			var desc := Label.new()
			desc.text = desc_text
			desc.add_theme_color_override("font_color", Color(0.7, 0.7, 0.75, 0.85))
			desc.add_theme_font_size_override("font_size", 11)
			desc.size_flags_horizontal = Control.SIZE_EXPAND_FILL
			desc.vertical_alignment = VERTICAL_ALIGNMENT_CENTER
			desc.autowrap_mode = TextServer.AUTOWRAP_WORD_SMART
			row.add_child(desc)
		
		# Separator.
		var sep := HSeparator.new()
		sep.custom_minimum_size = Vector2(440, 8)
		toggles_vbox.add_child(sep)
	
	# Add sliders for opacity values.
	var opacity_section := Label.new()
	opacity_section.text = "OPACITY"
	opacity_section.add_theme_color_override("font_color", Color(0.25, 0.85, 1, 1))
	opacity_section.add_theme_font_size_override("font_size", 18)
	opacity_section.custom_minimum_size = Vector2(440, 32)
	toggles_vbox.add_child(opacity_section)
	
	_add_slider_row("platform_opacity", "Platform Opacity", 0.0, 1.0, 0.05)
	_add_slider_row("timer_opacity", "Timer Opacity", 0.0, 1.0, 0.05)
	_add_slider_row("speed_multiplier", "Speed Multiplier", 0.5, 2.0, 0.1)
	_add_slider_row("max_undo", "Max Undo Steps", 10, 500, 10)


func _add_slider_row(key: String, label_text: String, min_val: float, max_val: float, step: float) -> void:
	var row := HBoxContainer.new()
	row.custom_minimum_size = Vector2(440, 36)
	row.add_theme_constant_override("separation", 8)
	toggles_vbox.add_child(row)
	
	var label := Label.new()
	label.text = label_text
	label.custom_minimum_size = Vector2(180, 32)
	label.add_theme_font_size_override("font_size", 14)
	label.vertical_alignment = VERTICAL_ALIGNMENT_CENTER
	row.add_child(label)
	
	var slider := HSlider.new()
	slider.min_value = min_val
	slider.max_value = max_val
	slider.step = step
	slider.value = float(SettingsSingleton.get(key))
	slider.size_flags_horizontal = Control.SIZE_EXPAND_FILL
	slider.custom_minimum_size = Vector2(180, 32)
	slider.value_changed.connect(_on_slider_changed.bind(key))
	row.add_child(slider)
	
	var value_label := Label.new()
	value_label.text = "%.2f" % float(SettingsSingleton.get(key))
	value_label.custom_minimum_size = Vector2(80, 32)
	value_label.add_theme_font_size_override("font_size", 13)
	value_label.add_theme_color_override("font_color", Color(0.25, 0.85, 1, 1))
	value_label.vertical_alignment = VERTICAL_ALIGNMENT_CENTER
	value_label.horizontal_alignment = HORIZONTAL_ALIGNMENT_CENTER
	slider.value_changed.connect(func(v: float): value_label.text = "%.2f" % v)
	row.add_child(value_label)


func _on_toggle_changed(pressed: bool, key: String) -> void:
	SettingsSingleton.set_setting(key, pressed)


func _on_slider_changed(value: float, key: String) -> void:
	SettingsSingleton.set_setting(key, value)


func _on_back() -> void:
	GameManager.goto("res://scenes/MainMenu.tscn")


func _on_reset() -> void:
	SettingsSingleton.reset_to_defaults()
	# Rebuild UI de reflect defaults.
	for c in toggles_vbox.get_children():
		c.queue_free()
	await get_tree().process_frame
	_build_toggles()


func _unhandled_input(event: InputEvent) -> void:
	if event.is_action_pressed("ui_cancel"):
		_on_back()
