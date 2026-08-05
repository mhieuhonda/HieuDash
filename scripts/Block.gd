extends StaticBody2D
## Block - khoi vuong co the dung len, can ben trai = chet.
## FIX v0.2: SideHazard chi kill khi player cham ben hong, KHONG kill khi
## nam tren top (player phai co y_position < block_top - threshold).
## FIX v0.3: Ho tro stack_height metadata (h=1 hoac h=2) - resize body, top,
## outline, collision, side_hazard cho phu hop.
class_name Block

@export var block_color: Color = Color(0.85, 0.32, 0.95, 1.0)
@export var top_color: Color = Color(1.0, 0.65, 0.2, 1.0)

@onready var body: Polygon2D = $Body
@onready var top: Polygon2D = $Top
@onready var outline: Polygon2D = $Outline
@onready var collision: CollisionShape2D = $Collision
@onready var side_hazard: Area2D = $SideHazard
@onready var side_hazard_shape: CollisionShape2D = $SideHazard/Shape

# Chieu cao khoi tinh theo don vi grid (1 hoac 2).
var stack_height: int = 1
const BLOCK_W := 80.0
const BLOCK_H := 80.0  # chieu cao 1 tang
const TOP_SAFE_MARGIN := 8.0


func _ready() -> void:
        add_to_group("block")
        # Doc stack_height tu metadata (set boi Game.gd khi spawn).
        if has_meta("stack_height"):
                stack_height = int(get_meta("stack_height", 1))
        stack_height = clamp(stack_height, 1, 2)
        _rebuild_for_height()
        if side_hazard:
                side_hazard.body_entered.connect(_on_side_entered)
        _apply_color()


func _rebuild_for_height() -> void:
        # Resize body, top, outline, collision, side_hazard theo stack_height.
        var total_h := BLOCK_H * float(stack_height)
        var half_h := total_h * 0.5
        # top_y la vi tri top cua block (local). y tang xuong duoi.
        var top_y_local := -half_h
        var bottom_y_local := half_h
        # Body (toa do local cua polygon xung quanh tam).
        if body:
                body.polygon = PackedVector2Array([
                        Vector2(-BLOCK_W * 0.5, top_y_local),
                        Vector2(BLOCK_W * 0.5, top_y_local),
                        Vector2(BLOCK_W * 0.5, bottom_y_local),
                        Vector2(-BLOCK_W * 0.5, bottom_y_local),
                ])
        if top:
                # Top strip: 12px dai tu top_y_local xuong.
                top.polygon = PackedVector2Array([
                        Vector2(-BLOCK_W * 0.5, top_y_local),
                        Vector2(BLOCK_W * 0.5, top_y_local),
                        Vector2(BLOCK_W * 0.5, top_y_local + 12.0),
                        Vector2(-BLOCK_W * 0.5, top_y_local + 12.0),
                ])
        if outline:
                outline.polygon = PackedVector2Array([
                        Vector2(-BLOCK_W * 0.5 - 4.0, top_y_local - 4.0),
                        Vector2(BLOCK_W * 0.5 + 4.0, top_y_local - 4.0),
                        Vector2(BLOCK_W * 0.5 + 4.0, bottom_y_local + 4.0),
                        Vector2(-BLOCK_W * 0.5 - 4.0, bottom_y_local + 4.0),
                ])
        # Collision shape (RectangleShape2D).
        if collision and collision.shape is RectangleShape2D:
                (collision.shape as RectangleShape2D).size = Vector2(BLOCK_W, total_h)
        # SideHazard shape - nho hon collision 2px moi chieu.
        if side_hazard_shape and side_hazard_shape.shape is RectangleShape2D:
                (side_hazard_shape.shape as RectangleShape2D).size = Vector2(BLOCK_W - 2.0, total_h - 2.0)


func _apply_color() -> void:
        if body:
                body.color = block_color
        if top:
                top.color = top_color


func set_stack_height(h: int) -> void:
        stack_height = clamp(h, 1, 2)
        set_meta("stack_height", stack_height)
        _rebuild_for_height()


func _on_side_entered(other: Node) -> void:
        if not (other.is_in_group("player") and other.has_method("die")):
                return
        # Kiem tra xem player co dang dung tren top khong.
        # Player center phai nam tren (block_top - margin).
        var n2d := other as Node2D
        if n2d == null:
                return
        var player_y: float = n2d.global_position.y
        # block_top_y_global = global_position.y - half_total_h
        var half_total_h := BLOCK_H * float(stack_height) * 0.5
        var block_top_y: float = global_position.y - half_total_h
        if player_y < block_top_y - TOP_SAFE_MARGIN:
                # Player dang dung tren top -> khong kill.
                return
        # Nguoc lai (cham ben hong hoac duoi) -> kill.
        other.die()
