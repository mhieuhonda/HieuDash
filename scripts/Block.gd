extends StaticBody2D
## Block - khoi vuong co the dung len, can ben trai = chet.
class_name Block

@export var block_color: Color = Color(0.85, 0.32, 0.95, 1.0)
@export var top_color: Color = Color(1.0, 0.65, 0.2, 1.0)

@onready var body: Polygon2D = $Body
@onready var top: Polygon2D = $Top
@onready var side_hazard: Area2D = $SideHazard


func _ready() -> void:
	add_to_group("block")
	if side_hazard:
		side_hazard.body_entered.connect(_on_side_entered)
	_apply_color()


func _apply_color() -> void:
	if body:
		body.color = block_color
	if top:
		top.color = top_color


func _on_side_entered(other: Node) -> void:
	if other.is_in_group("player") and other.has_method("die"):
		other.die()
