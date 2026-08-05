extends Area2D
## Bouncer - dem nay, khi player dap vao -> duoc boost len cao hon jump binh thuong.
## Khong kill - chi boost. Visual: hinh tron co mau cam, co hieu ung "boing".
class_name Bouncer

signal bounced

@export var pad_color: Color = Color(1.0, 0.55, 0.15, 1.0)
@export var glow_color: Color = Color(1.0, 0.7, 0.2, 0.4)
@export var boost_force: float = -1050.0  # phai khop Player.bouncer_boost

@onready var pad: Polygon2D = $Pad
@onready var glow: Polygon2D = $Glow
@onready var bounce_sfx: AudioStreamPlayer = $BounceSfx

var _active_tween: Tween


func _ready() -> void:
	add_to_group("bouncer")
	body_entered.connect(_on_body_entered)
	pad.color = pad_color
	glow.color = glow_color
	# Load audio.
	if ResourceLoader.exists("res://assets/sfx/bump.wav"):
		bounce_sfx.stream = load("res://assets/sfx/bump.wav")


func _on_body_entered(body: Node) -> void:
	if not body.is_in_group("player"):
		return
	if body.has_method("bounce"):
		body.bounce()
	elif body.has_method("do_jump"):
		body.do_jump()
	emit_signal("bounced")
	if bounce_sfx and GameManager.sfx_enabled and bounce_sfx.stream:
		bounce_sfx.play()
	# Hieu ung visual: squish.
	if _active_tween and _active_tween.is_valid():
		_active_tween.kill()
	_active_tween = create_tween()
	_active_tween.tween_property(pad, "scale", Vector2(1.2, 0.7), 0.08).set_trans(Tween.TRANS_SINE)
	_active_tween.tween_property(pad, "scale", Vector2(1.0, 1.0), 0.18).set_trans(Tween.TRANS_ELASTIC)
