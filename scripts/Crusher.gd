extends Node2D
## Crusher - khoi tu tren roi xuong theo chu ky, cham player = chet.
## Player co the dung duoi hoac chui qua khi crusher nam tren cao.
class_name Crusher

signal hit_player

@export var block_color: Color = Color(0.95, 0.25, 0.35, 1.0)
@export var top_color: Color = Color(1.0, 0.65, 0.2, 1.0)
@export var period: float = 2.0  # chu ky (giay)
@export var rise_time: float = 0.6  # thoi gian nen len
@export var fall_time: float = 0.4  # thoi gian roi xuong
@export var rest_y_offset: float = -260.0  # vi tri luc nang cao (cach vi tri dat)
@export var smash_y_offset: float = 0.0  # vi tri luc roi xuong (vi tri dat)

@onready var body: Polygon2D = $Body
@onready var top: Polygon2D = $Top
@onready var outline: Polygon2D = $Body/Outline
@onready var hazard: Area2D = $Hazard
@onready var hazard_shape: CollisionShape2D = $Hazard/Shape
@onready var base_pos_y: float = 0.0
var _elapsed: float = 0.0
var _is_smashing: bool = false


func _ready() -> void:
	add_to_group("hazard")
	if hazard:
		hazard.body_entered.connect(_on_hazard_entered)
	_apply_color()
	# Luu vi tri y ban dau (vi tri global y cua Crusher).
	base_pos_y = global_position.y


func _apply_color() -> void:
	if body:
		body.color = block_color
	if top:
		top.color = top_color


func set_period(p: float) -> void:
	period = max(0.8, p)


func _process(delta: float) -> void:
	_elapsed += delta
	# Cycle = rest (high) -> fall -> smash (low, rest) -> rise -> repeat
	var cycle_time := fmod(_elapsed, period)
	# Tinh toan progress va position.
	var fall_start := period - fall_time - rise_time
	if cycle_time < fall_start:
		# Rest (nam tren cao).
		position.y = lerp(position.y, rest_y_offset, 0.2)
		_is_smashing = false
	elif cycle_time < fall_start + fall_time:
		# Roi xuong.
		var t := (cycle_time - fall_start) / fall_time
		# Ease in (tang toc).
		var eased := t * t
		position.y = lerp(rest_y_offset, smash_y_offset, eased)
		_is_smashing = true
	else:
		# Nang len.
		var t := (cycle_time - fall_start - fall_time) / rise_time
		# Ease out (giam toc).
		var eased := 1.0 - (1.0 - t) * (1.0 - t)
		position.y = lerp(smash_y_offset, rest_y_offset, eased)
		_is_smashing = false


func _on_hazard_entered(other: Node) -> void:
	if other.is_in_group("player") and other.has_method("die"):
		# Chi kill khi crusher dang roi xuong hoac o vi tri thap (danger zone).
		# Khong kill khi crane nang len (player chui qua).
		if _is_smashing or position.y > smash_y_offset - 40.0:
			other.die()
