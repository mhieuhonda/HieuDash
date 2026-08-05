extends Area2D
## Laser - tia laser bat/tat theo chu ky. Chi kill khi dang BAT (sang).
## Dat o y nao do (thuong treo khong), huong ngang.
class_name Laser

signal hit_player

@export var beam_color: Color = Color(1.0, 0.2, 0.4, 0.9)
@export var glow_color: Color = Color(1.0, 0.4, 0.6, 0.4)
@export var emitter_color: Color = Color(0.3, 0.1, 0.15, 1.0)
@export var period: float = 2.0  # chu ky (giay)
@export var on_duration: float = 1.2  # thoi gian laser bat
@export var beam_length: float = 220.0  # chieu dai tia (xuoi xuong duoi)

@onready var beam: Polygon2D = $Beam
@onready var glow: Polygon2D = $Glow
@onready var emitter_top: Polygon2D = $EmitterTop
@onready var emitter_bottom: Polygon2D = $EmitterBottom
@onready var collision: CollisionShape2D = $Collision

var _elapsed: float = 0.0
var _is_on: bool = true


func _ready() -> void:
	add_to_group("hazard")
	body_entered.connect(_on_body_entered)
	_apply_color()
	_rebuild_beam()


func _apply_color() -> void:
	if beam:
		beam.color = beam_color
	if glow:
		glow.color = glow_color
	if emitter_top:
		emitter_top.color = emitter_color
	if emitter_bottom:
		emitter_bottom.color = emitter_color


func set_period(p: float) -> void:
	period = max(0.6, p)


func _rebuild_beam() -> void:
	var hw := 10.0
	if beam:
		beam.polygon = PackedVector2Array(-hw, 0, hw, 0, hw, beam_length, -hw, beam_length)
	if glow:
		glow.polygon = PackedVector2Array(-hw * 2.5, 0, hw * 2.5, 0, hw * 2.5, beam_length, -hw * 2.5, beam_length)
	if collision:
		var rect := RectangleShape2D.new()
		rect.size = Vector2(hw * 2.0, beam_length)
		collision.shape = rect
		collision.position = Vector2(0, beam_length * 0.5)


func _process(delta: float) -> void:
	_elapsed += delta
	var cycle := fmod(_elapsed, period)
	_is_on = cycle < on_duration
	# Visual bat/tat.
	beam.visible = _is_on
	glow.visible = _is_on
	collision.set_deferred("disabled", not _is_on)


func _on_body_entered(body: Node) -> void:
	# Chi kill khi laser dang BAT (collision da disabled khi off, nhung
	# de an toan kiem tra them _is_on).
	if _is_on and body.is_in_group("player") and body.has_method("die"):
		body.die()
