extends Node
## PlayerProfile (Autoload)
## Luu thong tin player customization: color_1, color_2, glow, icon_type.
## Port tu GDPS-Editor-22 GameManager + AdvancedIconSelect (offline-only).
class_name PlayerProfile

signal profile_changed

# ---- Profile state ----
var color_1_id: int = 0  # index vao ColorPalette.COLORS (0..105)
var color_2_id: int = 3  # index vao ColorPalette.COLORS
var glow_enabled: bool = false
var icon_type: int = 0  # 0=Cube, 1=Circle, 2=Triangle, 3=Diamond, 4=Hexagon
var swing_id: int = 0  # 0..38 (port tu AdvancedIconSelect swing icons)
var jetpack_id: int = 0  # 0..3 (port tu AdvancedIconSelect jetpack icons)

# Convenience accessors - tra ve Color thuc te tu ColorPalette.
var color_1: Color = Color(0.25, 0.85, 1.0, 1.0)
var color_2: Color = Color(1.0, 0.85, 0.2, 1.0)

const PROFILE_PATH := "user://hieudash_profile.cfg"
const SECTION_PROFILE := "profile"


func _ready() -> void:
	load_profile()


func load_profile() -> void:
	var cfg := ConfigFile.new()
	var err := cfg.load(PROFILE_PATH)
	if err != OK:
		_apply_colors()
		return
	color_1_id = int(cfg.get_value(SECTION_PROFILE, "color_1_id", color_1_id))
	color_2_id = int(cfg.get_value(SECTION_PROFILE, "color_2_id", color_2_id))
	glow_enabled = bool(cfg.get_value(SECTION_PROFILE, "glow_enabled", glow_enabled))
	icon_type = int(cfg.get_value(SECTION_PROFILE, "icon_type", icon_type))
	swing_id = int(cfg.get_value(SECTION_PROFILE, "swing_id", swing_id))
	jetpack_id = int(cfg.get_value(SECTION_PROFILE, "jetpack_id", jetpack_id))
	_apply_colors()


func save_profile() -> void:
	var cfg := ConfigFile.new()
	cfg.set_value(SECTION_PROFILE, "color_1_id", color_1_id)
	cfg.set_value(SECTION_PROFILE, "color_2_id", color_2_id)
	cfg.set_value(SECTION_PROFILE, "glow_enabled", glow_enabled)
	cfg.set_value(SECTION_PROFILE, "icon_type", icon_type)
	cfg.set_value(SECTION_PROFILE, "swing_id", swing_id)
	cfg.set_value(SECTION_PROFILE, "jetpack_id", jetpack_id)
	cfg.save(PROFILE_PATH)


func _apply_colors() -> void:
	color_1 = ColorPalette.color_for_idx(color_1_id)
	color_2 = ColorPalette.color_for_idx(color_2_id)


func set_color_1(idx: int) -> void:
	color_1_id = clamp(idx, 0, ColorPalette.COLORS.size() - 1)
	_apply_colors()
	save_profile()
	emit_signal("profile_changed")


func set_color_2(idx: int) -> void:
	color_2_id = clamp(idx, 0, ColorPalette.COLORS.size() - 1)
	_apply_colors()
	save_profile()
	emit_signal("profile_changed")


func set_glow(enabled: bool) -> void:
	glow_enabled = enabled
	save_profile()
	emit_signal("profile_changed")


func set_icon_type(t: int) -> void:
	icon_type = clamp(t, 0, 4)
	save_profile()
	emit_signal("profile_changed")


func set_swing_id(idx: int) -> void:
	swing_id = clamp(idx, 0, 38)
	save_profile()
	emit_signal("profile_changed")


func set_jetpack_id(idx: int) -> void:
	jetpack_id = clamp(idx, 0, 3)
	save_profile()
	emit_signal("profile_changed")


func get_color_1() -> Color:
	return color_1


func get_color_2() -> Color:
	return color_2
