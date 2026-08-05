extends Area2D
## SpikeStrip - day spike dai (3-8 spike lien tuc), cham = chet.
## count co the thay doi qua set_count().
class_name SpikeStrip

signal hit_player

@export var spike_color: Color = Color(1.0, 0.18, 0.32, 1.0)
@export var outline_color: Color = Color(0.08, 0.04, 0.06, 1.0)
@export var spike_width: float = 44.0

@onready var container: Node2D = $Spikes
@onready var collision: CollisionShape2D = $Collision

var _count: int = 4
var _rect_shape: RectangleShape2D  # reuse, khong tao moi moi lan rebuild


func _ready() -> void:
        add_to_group("hazard")
        body_entered.connect(_on_body_entered)
        _rebuild()


func set_count(n: int) -> void:
        _count = clamp(n, 2, 8)
        _rebuild()


func _rebuild() -> void:
        # Xoa spike con cu (neu co).
        if container:
                for c in container.get_children():
                        c.queue_free()
                # Tao spike con (Polygon2D don gian, khong can collision rieng vi
                # SpikeStrip dung 1 collision hinh chu nhat dai).
                for i in _count:
                        var sx := (i - (_count - 1) * 0.5) * spike_width
                        var poly := Polygon2D.new()
                        poly.polygon = PackedVector2Array([
                                Vector2(sx - spike_width * 0.4, 20.0),
                                Vector2(sx + spike_width * 0.4, 20.0),
                                Vector2(sx, -22.0),
                        ])
                        poly.color = spike_color
                        container.add_child(poly)
                        var outline := Polygon2D.new()
                        outline.polygon = PackedVector2Array([
                                Vector2(sx - spike_width * 0.45, 22.0),
                                Vector2(sx + spike_width * 0.45, 22.0),
                                Vector2(sx, -26.0),
                        ])
                        outline.color = outline_color
                        outline.z_index = -1
                        container.add_child(outline)
        # Cap nhat collision chinh.
        # FIX v0.3: Collision width chinh xac theo visual spikes.
        # Visual width = (count-1)*spike_width + spike_width*0.8 (moi spike rong 0.8*spike_width)
        if collision:
                if _rect_shape == null:
                        _rect_shape = RectangleShape2D.new()
                var visual_width := float(_count - 1) * spike_width + spike_width * 0.8
                _rect_shape.size = Vector2(visual_width, 40)
                collision.shape = _rect_shape
                collision.position = Vector2(0, 10)


func _on_body_entered(body: Node) -> void:
        if body.is_in_group("player"):
                emit_signal("hit_player")
                if body.has_method("die"):
                        body.die()
