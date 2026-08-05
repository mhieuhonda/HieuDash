extends StaticBody2D
## Block - khoi vuong co the dung len, can ben trai = chet.
## FIX v0.2: SideHazard chi kill khi player cham ben hong, KHONG kill khi
## nam tren top (player phai co y_position < block_top - threshold).
class_name Block

@export var block_color: Color = Color(0.85, 0.32, 0.95, 1.0)
@export var top_color: Color = Color(1.0, 0.65, 0.2, 1.0)

@onready var body: Polygon2D = $Body
@onready var top: Polygon2D = $Top
@onready var side_hazard: Area2D = $SideHazard

# Chieu cao khoi (de xac dinh nguong top kill)
const BLOCK_HALF_H := 40.0
# Neu player nam cao hon day - 8px so voi tam block -> dang o top, KHONG kill.
const TOP_SAFE_MARGIN := 8.0


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
        if not (other.is_in_group("player") and other.has_method("die")):
                return
        # Kiem tra xem player co dang dung tren top khong.
        # Player center phai nam tren (block_top - margin).
        var n2d := other as Node2D
        if n2d == null:
                return
        var player_y: float = n2d.global_position.y
        var block_top_y: float = global_position.y - BLOCK_HALF_H
        if player_y < block_top_y - TOP_SAFE_MARGIN:
                # Player dang dung tren top -> khong kill.
                return
        # Nguoc lai (cham ben hong hoac duoi) -> kill.
        other.die()
