extends Area2D
## Coin - vang nhat duoc khi player cham.
class_name Coin

signal collected

@export var coin_color: Color = Color(1.0, 0.85, 0.2, 1.0)
@export var spin_speed: float = 3.0

@onready var poly: Polygon2D = $Poly
@onready var glow: Polygon2D = $Glow
@onready var collect_sfx: AudioStreamPlayer = $CollectSfx

var _collected: bool = false


func _ready() -> void:
        add_to_group("coin")
        body_entered.connect(_on_body_entered)
        poly.color = coin_color
        glow.color = coin_color
        glow.color.a = 0.35
        # Load audio stream (bao ve neu file khong ton tai).
        if ResourceLoader.exists("res://assets/sfx/coin.wav"):
                collect_sfx.stream = load("res://assets/sfx/coin.wav")


func _process(delta: float) -> void:
        if _collected:
                return
        poly.rotation += spin_speed * delta
        glow.scale = Vector2(1.0, 1.0) + Vector2(sin(Time.get_ticks_msec() * 0.006) * 0.1, sin(Time.get_ticks_msec() * 0.006) * 0.1)


func _on_body_entered(body: Node) -> void:
        if _collected:
                return
        if body.is_in_group("player"):
                _collected = true
                emit_signal("collected")
                GameManager.add_coin()
                if collect_sfx and GameManager.sfx_enabled and collect_sfx.stream:
                        # FIX v0.3: Reparent sfx len current_scene truoc khi free Coin,
                        # de sound khong bi cut off khi Coin queue_free.
                        # FIX v0.4: AudioStreamPlayer khong co global_position (chi Node2D/Control co),
                        # bo 2 dong gan global_position vi no khong co tac dung.
                        var tree := get_tree()
                        if tree and tree.current_scene:
                                collect_sfx.reparent(tree.current_scene)
                                # Tu dong free sfx sau khi play xong.
                                collect_sfx.finished.connect(collect_sfx.queue_free)
                        collect_sfx.play()
                var tw := create_tween()
                tw.set_parallel(true)
                tw.tween_property(poly, "scale", Vector2(2.4, 2.4), 0.18).set_ease(Tween.EASE_OUT).set_trans(Tween.TRANS_BACK)
                tw.tween_property(poly, "modulate:a", 0.0, 0.18)
                tw.tween_property(glow, "scale", Vector2(3.5, 3.5), 0.18)
                tw.tween_property(glow, "modulate:a", 0.0, 0.18)
                tw.chain().tween_callback(queue_free)
