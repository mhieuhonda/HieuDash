extends Node
## SettingsSingleton (Autoload)
## Quan ly settings toan cuc - luu vao user://hieudash_settings.cfg
## Port tu GDPS-Editor-22 SettingsSingleton (offline-only, bo login/online).
## KHONG dung class_name vi no trung ten voi autoload singleton (Godot 4.7).

signal setting_changed(key: String, value)

# ---- Settings (default values) ----
# Hien thi
var platform_opacity: float = 1.0  # 0.0 - 1.0 (do mo nen platforms)
var timer_opacity: float = 1.0  # 0.0 - 1.0 (do mo speedrun timer)
var timer_enabled: bool = true  # hien speedrun timer
var hide_pause_button: bool = false  # an pause button trong gameplay
var alt_touch_layout: bool = false  # dao vung tap (mobile)

# Gameplay
var playtest_enabled: bool = true  # cho phep practice mode
var show_level_info: bool = true  # hien thong tin level khi start
var disable_linked_objects: bool = false  # vo hieu hoa object lien ket (debug)
var show_editor_shortcut: bool = false  # hien shortcut editor

# Advanced (port tu advancedOptionsLayer)
var smooth_fix: bool = true  # smooth physics
var ignore_damage: bool = false  # immortal mode (debug)
var follow_player: bool = true  # camera follow
var draw_trigger_boxes: bool = false  # hien trigger boxes (debug)
var debug_draw: bool = false  # debug collision shapes
var effect_lines: bool = true  # hien effect lines
var toggle_editor_grid: bool = true  # hien grid editor
var toggle_effect_duration: bool = true  # hien thoi luong effect
var max_undo: int = 100  # so luong undo steps
var has_color: bool = true  # hien color picker
var toggle_editor_bg: bool = true  # hien editor bg
var hide_grid: bool = false  # an grid
var layer_locking: bool = false  # khoa layer editor
var record_order: bool = false  # ghi thu tu record
var high_capacity_mode: bool = false  # che do suc chua cao

# Practice mode
var practice_mode: bool = false  # practice mode hien tai
var auto_checkpoint: bool = true  # tu dong checkpoint trong practice
var speed_multiplier: float = 1.0  # 0.5 - 2.0

const SETTINGS_PATH := "user://hieudash_settings.cfg"
const SECTION_GAMEPLAY := "gameplay"
const SECTION_DISPLAY := "display"
const SECTION_ADVANCED := "advanced"


func _ready() -> void:
        load_settings()


func load_settings() -> void:
        var cfg := ConfigFile.new()
        var err := cfg.load(SETTINGS_PATH)
        if err != OK:
                # Khong co file -> dung default values.
                return
        # Display
        platform_opacity = float(cfg.get_value(SECTION_DISPLAY, "platform_opacity", platform_opacity))
        timer_opacity = float(cfg.get_value(SECTION_DISPLAY, "timer_opacity", timer_opacity))
        timer_enabled = bool(cfg.get_value(SECTION_DISPLAY, "timer_enabled", timer_enabled))
        hide_pause_button = bool(cfg.get_value(SECTION_DISPLAY, "hide_pause_button", hide_pause_button))
        alt_touch_layout = bool(cfg.get_value(SECTION_DISPLAY, "alt_touch_layout", alt_touch_layout))
        # Gameplay
        playtest_enabled = bool(cfg.get_value(SECTION_GAMEPLAY, "playtest_enabled", playtest_enabled))
        show_level_info = bool(cfg.get_value(SECTION_GAMEPLAY, "show_level_info", show_level_info))
        disable_linked_objects = bool(cfg.get_value(SECTION_GAMEPLAY, "disable_linked_objects", disable_linked_objects))
        show_editor_shortcut = bool(cfg.get_value(SECTION_GAMEPLAY, "show_editor_shortcut", show_editor_shortcut))
        practice_mode = bool(cfg.get_value(SECTION_GAMEPLAY, "practice_mode", practice_mode))
        auto_checkpoint = bool(cfg.get_value(SECTION_GAMEPLAY, "auto_checkpoint", auto_checkpoint))
        speed_multiplier = float(cfg.get_value(SECTION_GAMEPLAY, "speed_multiplier", speed_multiplier))
        # Advanced
        smooth_fix = bool(cfg.get_value(SECTION_ADVANCED, "smooth_fix", smooth_fix))
        ignore_damage = bool(cfg.get_value(SECTION_ADVANCED, "ignore_damage", ignore_damage))
        follow_player = bool(cfg.get_value(SECTION_ADVANCED, "follow_player", follow_player))
        draw_trigger_boxes = bool(cfg.get_value(SECTION_ADVANCED, "draw_trigger_boxes", draw_trigger_boxes))
        debug_draw = bool(cfg.get_value(SECTION_ADVANCED, "debug_draw", debug_draw))
        effect_lines = bool(cfg.get_value(SECTION_ADVANCED, "effect_lines", effect_lines))
        toggle_editor_grid = bool(cfg.get_value(SECTION_ADVANCED, "toggle_editor_grid", toggle_editor_grid))
        toggle_effect_duration = bool(cfg.get_value(SECTION_ADVANCED, "toggle_effect_duration", toggle_effect_duration))
        max_undo = int(cfg.get_value(SECTION_ADVANCED, "max_undo", max_undo))
        has_color = bool(cfg.get_value(SECTION_ADVANCED, "has_color", has_color))
        toggle_editor_bg = bool(cfg.get_value(SECTION_ADVANCED, "toggle_editor_bg", toggle_editor_bg))
        hide_grid = bool(cfg.get_value(SECTION_ADVANCED, "hide_grid", hide_grid))
        layer_locking = bool(cfg.get_value(SECTION_ADVANCED, "layer_locking", layer_locking))
        record_order = bool(cfg.get_value(SECTION_ADVANCED, "record_order", record_order))
        high_capacity_mode = bool(cfg.get_value(SECTION_ADVANCED, "high_capacity_mode", high_capacity_mode))


func save_settings() -> void:
        var cfg := ConfigFile.new()
        # Display
        cfg.set_value(SECTION_DISPLAY, "platform_opacity", platform_opacity)
        cfg.set_value(SECTION_DISPLAY, "timer_opacity", timer_opacity)
        cfg.set_value(SECTION_DISPLAY, "timer_enabled", timer_enabled)
        cfg.set_value(SECTION_DISPLAY, "hide_pause_button", hide_pause_button)
        cfg.set_value(SECTION_DISPLAY, "alt_touch_layout", alt_touch_layout)
        # Gameplay
        cfg.set_value(SECTION_GAMEPLAY, "playtest_enabled", playtest_enabled)
        cfg.set_value(SECTION_GAMEPLAY, "show_level_info", show_level_info)
        cfg.set_value(SECTION_GAMEPLAY, "disable_linked_objects", disable_linked_objects)
        cfg.set_value(SECTION_GAMEPLAY, "show_editor_shortcut", show_editor_shortcut)
        cfg.set_value(SECTION_GAMEPLAY, "practice_mode", practice_mode)
        cfg.set_value(SECTION_GAMEPLAY, "auto_checkpoint", auto_checkpoint)
        cfg.set_value(SECTION_GAMEPLAY, "speed_multiplier", speed_multiplier)
        # Advanced
        cfg.set_value(SECTION_ADVANCED, "smooth_fix", smooth_fix)
        cfg.set_value(SECTION_ADVANCED, "ignore_damage", ignore_damage)
        cfg.set_value(SECTION_ADVANCED, "follow_player", follow_player)
        cfg.set_value(SECTION_ADVANCED, "draw_trigger_boxes", draw_trigger_boxes)
        cfg.set_value(SECTION_ADVANCED, "debug_draw", debug_draw)
        cfg.set_value(SECTION_ADVANCED, "effect_lines", effect_lines)
        cfg.set_value(SECTION_ADVANCED, "toggle_editor_grid", toggle_editor_grid)
        cfg.set_value(SECTION_ADVANCED, "toggle_effect_duration", toggle_effect_duration)
        cfg.set_value(SECTION_ADVANCED, "max_undo", max_undo)
        cfg.set_value(SECTION_ADVANCED, "has_color", has_color)
        cfg.set_value(SECTION_ADVANCED, "toggle_editor_bg", toggle_editor_bg)
        cfg.set_value(SECTION_ADVANCED, "hide_grid", hide_grid)
        cfg.set_value(SECTION_ADVANCED, "layer_locking", layer_locking)
        cfg.set_value(SECTION_ADVANCED, "record_order", record_order)
        cfg.set_value(SECTION_ADVANCED, "high_capacity_mode", high_capacity_mode)
        cfg.save(SETTINGS_PATH)


func set_setting(key: String, value) -> void:
        set(key, value)
        save_settings()
        emit_signal("setting_changed", key, value)


func reset_to_defaults() -> void:
        platform_opacity = 1.0
        timer_opacity = 1.0
        timer_enabled = true
        hide_pause_button = false
        alt_touch_layout = false
        playtest_enabled = true
        show_level_info = true
        disable_linked_objects = false
        show_editor_shortcut = false
        practice_mode = false
        auto_checkpoint = true
        speed_multiplier = 1.0
        smooth_fix = true
        ignore_damage = false
        follow_player = true
        draw_trigger_boxes = false
        debug_draw = false
        effect_lines = true
        toggle_editor_grid = true
        toggle_effect_duration = true
        max_undo = 100
        has_color = true
        toggle_editor_bg = true
        hide_grid = false
        layer_locking = false
        record_order = false
        high_capacity_mode = false
        save_settings()
