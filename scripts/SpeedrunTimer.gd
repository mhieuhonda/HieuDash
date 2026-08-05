extends Label
## SpeedrunTimer - hien thoi gian choi o goc tren trai HUD.
## Mau: trang (normal) / do (practice mode, sau pause, sau death = invalid attempt).
## Port tu GDPS-Editor-22 SpeedrunTimerHook (offline-only).
class_name SpeedrunTimer

var _elapsed: float = 0.0
var _is_invalid: bool = false
var _is_running: bool = false

const COLOR_VALID := Color(1.0, 1.0, 1.0, 0.9)
const COLOR_INVALID := Color(1.0, 0.18, 0.32, 0.95)


func _ready() -> void:
	text = "00:00.000"
	add_theme_color_override("font_color", COLOR_VALID)
	add_theme_color_override("font_shadow_color", Color(0, 0, 0, 0.8))
	add_theme_constant_override("shadow_offset_x", 2)
	add_theme_constant_override("shadow_offset_y", 2)
	add_theme_constant_override("shadow_outline_size", 2)
	add_theme_font_size_override("font_size", 22)
	# Ap dung opacity tu settings.
	modulate.a = SettingsSingleton.timer_opacity


func start() -> void:
	_elapsed = 0.0
	_is_invalid = false
	_is_running = true
	text = "00:00.000"
	add_theme_color_override("font_color", COLOR_VALID)


func stop() -> void:
	_is_running = false


func mark_invalid() -> void:
	# Danh dau lan thu nay khong hop le (practice, pause, death).
	_is_invalid = true
	add_theme_color_override("font_color", COLOR_INVALID)


func _process(delta: float) -> void:
	if not _is_running:
		return
	_elapsed += delta
	text = _format_time(_elapsed)


func _format_time(t: float) -> String:
	# Format: MM:SS.mmm
	var minutes := int(t) / 60
	var seconds := int(t) % 60
	var millis := int(t * 1000.0) % 1000
	return "%02d:%02d.%03d" % [minutes, seconds, millis]
