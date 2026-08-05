extends Area2D
## Pit - ho gap trong san. Player roi xuong = chet.
## Dat tren mat dat (y = FLOOR_Y). Visual la khoi den nho duoi san.
## Width co the thay doi qua set_width().
class_name Pit

@export var pit_color: Color = Color(0.02, 0.02, 0.05, 1.0)
@export var edge_color: Color = Color(1.0, 0.18, 0.32, 0.8)

@onready var fill: Polygon2D = $Fill
@onready var edge_left: Polygon2D = $EdgeLeft
@onready var edge_right: Polygon2D = $EdgeRight
@onready var collision: CollisionShape2D = $Collision

var _width: float = 120.0
const PIT_DEPTH: float = 400.0


func _ready() -> void:
        add_to_group("hazard")
        add_to_group("pit")
        body_entered.connect(_on_body_entered)
        _apply_color()
        _rebuild_shape()


func _apply_color() -> void:
        if fill:
                fill.color = pit_color
        if edge_left:
                edge_left.color = edge_color
        if edge_right:
                edge_right.color = edge_color


func set_width(w: float) -> void:
        _width = max(60.0, w)
        _rebuild_shape()


func _rebuild_shape() -> void:
        var hw := _width * 0.5
        # Visual fill (hinh chu nhat den duoi san, dai xuong duoi).
        if fill:
                fill.polygon = PackedVector2Array(-hw, 0, hw, 0, hw, PIT_DEPTH, -hw, PIT_DEPTH)
        # Edges (2 khoi nho do sang 2 ben).
        if edge_left:
                edge_left.polygon = PackedVector2Array(-hw - 6, -2, -hw, -2, -hw, 8, -hw - 6, 8)
        if edge_right:
                edge_right.polygon = PackedVector2Array(hw, -2, hw + 6, -2, hw + 6, 8, hw, 8)
        # Collision: phu mat san tai vi tri pit (player di vao = chet).
        # Hinh chu nhat dai = _width, cao = 60 (phu tu tren player den duoi san).
        # Vi tri y = -30 (nam ngang mat san).
        if collision:
                var rect := RectangleShape2D.new()
                rect.size = Vector2(_width, 60.0)
                collision.shape = rect
                collision.position = Vector2(0, -10.0)


func _on_body_entered(body: Node) -> void:
        if body.is_in_group("player") and body.has_method("die"):
                body.die()
