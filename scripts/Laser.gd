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
var _was_on: bool = true
var _rect_shape: RectangleShape2D  # reuse, khong tao moi moi lan rebuild


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
                beam.polygon = PackedVector2Array([
                        Vector2(-hw, 0.0),
                        Vector2(hw, 0.0),
                        Vector2(hw, beam_length),
                        Vector2(-hw, beam_length),
                ])
        if glow:
                glow.polygon = PackedVector2Array([
                        Vector2(-hw * 2.5, 0.0),
                        Vector2(hw * 2.5, 0.0),
                        Vector2(hw * 2.5, beam_length),
                        Vector2(-hw * 2.5, beam_length),
                ])
        if collision:
                # FIX v0.3: Reuse RectangleShape2D thay vi new() moi lan (resource leak).
                if _rect_shape == null:
                        _rect_shape = RectangleShape2D.new()
                _rect_shape.size = Vector2(hw * 2.0, beam_length)
                collision.shape = _rect_shape
                collision.position = Vector2(0, beam_length * 0.5)


func _process(delta: float) -> void:
        _elapsed += delta
        var cycle := fmod(_elapsed, period)
        _was_on = _is_on
        _is_on = cycle < on_duration
        # Visual bat/tat.
        beam.visible = _is_on
        glow.visible = _is_on
        collision.set_deferred("disabled", not _is_on)
        # FIX v0.3: Khi laser OFF -> ON va player dang trong vung, body_entered
        # khong trigger (player da o trong). Phai check overlap manually.
        if _is_on and not _was_on:
                _check_overlapping_players()


func _check_overlapping_players() -> void:
        for body in get_overlapping_bodies():
                if body.is_in_group("player") and body.has_method("die"):
                        body.die()
                        return


func _on_body_entered(body: Node) -> void:
        # Chi kill khi laser dang BAT (collision da disabled khi off, nhung
        # de an toan kiem tra them _is_on).
        if _is_on and body.is_in_group("player") and body.has_method("die"):
                body.die()
