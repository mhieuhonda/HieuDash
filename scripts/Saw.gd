extends Area2D
## Saw - luoi ca xoay tron, nam tren mat dat, cham = chet.
## Co the dat tai bat ky y nao (thuong dat tren mat dat hoac treo khong).
class_name Saw

signal hit_player

@export var saw_color: Color = Color(0.9, 0.92, 0.95, 1.0)
@export var hub_color: Color = Color(0.2, 0.2, 0.25, 1.0)
@export var spin_speed: float = 12.0  # rad/s

@onready var blade: Polygon2D = $Blade
@onready var outline: Polygon2D = $Outline
@onready var hub: Polygon2D = $Hub


func _ready() -> void:
	add_to_group("hazard")
	body_entered.connect(_on_body_entered)
	_apply_color()


func _apply_color() -> void:
	if blade:
		blade.color = saw_color
	if outline:
		outline.color = Color(0.05, 0.04, 0.06, 1.0)
	if hub:
		hub.color = hub_color


func _process(delta: float) -> void:
	if blade:
		blade.rotation += spin_speed * delta


func _on_body_entered(body: Node) -> void:
	if body.is_in_group("player"):
		emit_signal("hit_player")
		if body.has_method("die"):
			body.die()
