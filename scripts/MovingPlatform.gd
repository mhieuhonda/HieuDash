extends AnimatableBody2D
## MovingPlatform - nen di chuyen ngang hoac doc, player dung duoc len.
## FIX v0.3: Dung AnimatableBodyD thay vi StaticBody2D de player dung
## len nen di chuyen va di chuyen theo platform (sync to physics).
## Khong kill (player co the dung len). Cau hinh qua configure(range, speed, axis).
class_name MovingPlatform

@export var platform_color: Color = Color(0.3, 0.85, 0.6, 1.0)
@export var top_color: Color = Color(0.6, 1.0, 0.8, 1.0)
@export var move_range: float = 200.0
@export var move_speed: float = 100.0
@export var axis: String = "x"  # "x" hoac "y"

@onready var body: Polygon2D = $Body
@onready var top: Polygon2D = $Top
@onready var outline: Polygon2D = $Body/Outline
@onready var side_hazard: Area2D = $SideHazard

var _elapsed: float = 0.0
var _origin: Vector2 = Vector2.ZERO
const BLOCK_HALF_H := 20.0
const TOP_SAFE_MARGIN := 8.0


func _ready() -> void:
        add_to_group("block")
        add_to_group("moving_platform")
        _origin = global_position
        if side_hazard:
                side_hazard.body_entered.connect(_on_side_entered)
        _apply_color()


func _apply_color() -> void:
        if body:
                body.color = platform_color
        if top:
                top.color = top_color


func configure(r: float, s: float, ax: String) -> void:
        move_range = max(40.0, r)
        move_speed = max(20.0, s)
        axis = "x" if ax != "y" else "y"


func _physics_process(delta: float) -> void:
        _elapsed += delta
        # Sin wave -> di chuyen qua lai.
        var offset := sin(_elapsed * (move_speed / move_range)) * move_range
        if axis == "x":
                global_position.x = _origin.x + offset
        else:
                global_position.y = _origin.y + offset


func _on_side_entered(other: Node) -> void:
        # MovingPlatform chi kill khi player cham ben hong (giống Block).
        if not (other.is_in_group("player") and other.has_method("die")):
                return
        var n2d := other as Node2D
        if n2d == null:
                return
        var player_y: float = n2d.global_position.y
        var top_y: float = global_position.y - BLOCK_HALF_H
        if player_y < top_y - TOP_SAFE_MARGIN:
                return
        other.die()
