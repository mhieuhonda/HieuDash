extends Area2D
## GoalArea - dich den cuoi level, cham vao = thang.
class_name GoalArea

signal reached

@onready var flag: Polygon2D = $Flag
@onready var glow: Polygon2D = $Glow


func _ready() -> void:
	add_to_group("goal")
	body_entered.connect(_on_body_entered)


func _on_body_entered(body: Node) -> void:
	if body.is_in_group("player"):
		emit_signal("reached")
