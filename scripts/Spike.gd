extends Area2D
## Spike - chuong ngai vat tam giac, cham vao = chet.
class_name Spike

signal hit_player

@export var spike_color: Color = Color(1.0, 0.18, 0.32, 1.0)
@export var outline_color: Color = Color(0.08, 0.04, 0.06, 1.0)

@onready var poly: Polygon2D = $Poly
@onready var outline: Polygon2D = $Outline
@onready var collision: CollisionPolygon2D = $Collision


func _ready() -> void:
	add_to_group("hazard")
	body_entered.connect(_on_body_entered)
	_apply_color()


func _apply_color() -> void:
	if poly:
		poly.color = spike_color
	if outline:
		outline.color = outline_color


func _on_body_entered(body: Node) -> void:
	if body.is_in_group("player"):
		emit_signal("hit_player")
		if body.has_method("die"):
			body.die()
