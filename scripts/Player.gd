extends CharacterBody2D
## Player - cube tu chay sang phai, nhan jump de nhay.
## Style Geometry Dash: gravity nhanh, jump height co dinh, speed fixed.
class_name Player

signal died
signal landed
signal jumped
signal color_changed(color: Color)

@export_group("Movement")
@export var run_speed: float = 360.0
@export var jump_velocity: float = -680.0
@export var gravity: float = 1800.0
@export var max_fall_speed: float = 1400.0
@export var rotation_speed_air: float = 7.5  # rad/s khi bay
@export var bouncer_boost: float = -1050.0  # khi dap vao bouncer

@export_group("Visuals")
@export var cube_color: Color = Color(0.25, 0.85, 1.0, 1.0)
@export var trail_color: Color = Color(0.25, 0.85, 1.0, 0.6)
@export var land_color: Color = Color(1.0, 0.95, 0.5, 1.0)
@export var glow_enabled: bool = false
@export var icon_type: int = 0  # 0=Cube, 1=Circle, 2=Triangle, 3=Diamond, 4=Hexagon

var is_dead: bool = false
var is_grounded: bool = false
var _was_grounded: bool = false
var _jump_buffered: float = 0.0  # giay con lai de thuc hien jump buffer
var _coyote_time: float = 0.0  # grace period sau khi roi khoi mat dat
const JUMP_BUFFER_TIME := 0.12
const COYOTE_TIME := 0.10
# Track vi tri X lon nhat dat duoc de tinh score khoang cach.
var _max_x_reached: float = 0.0

@onready var sprite: Polygon2D = $Body
@onready var outline: Polygon2D = $Body/Outline
@onready var inner_highlight: Polygon2D = $Body/InnerHighlight
@onready var visual_root: Node2D = $Body  # chi rotate cai nay, khong rotate collision
@onready var collision: CollisionShape2D = $Collision
@onready var trail_particles: CPUParticles2D = $TrailParticles
@onready var jump_sfx: AudioStreamPlayer = $JumpSfx
@onready var death_sfx: AudioStreamPlayer = $DeathSfx
@onready var land_sfx: AudioStreamPlayer = $LandSfx
@onready var land_particles: CPUParticles2D = $LandParticles
@onready var death_particles: CPUParticles2D = $DeathParticles


func _ready() -> void:
        add_to_group("player")
        # Load profile tu PlayerProfile autoload.
        _apply_profile()
        _setup_particles()
        _load_audio()
        _max_x_reached = global_position.x


func _apply_profile() -> void:
        # Ap dung mau + glow + icon type tu PlayerProfile autoload.
        cube_color = PlayerProfile.color_1
        trail_color = Color(cube_color.r, cube_color.g, cube_color.b, 0.6)
        glow_enabled = PlayerProfile.glow_enabled
        icon_type = PlayerProfile.icon_type
        _apply_color()
        _apply_icon_shape()
        _apply_glow()


func _apply_color() -> void:
        sprite.color = cube_color


func _apply_glow() -> void:
        # Them hieu ung glow (nang brightness + vien sang) neu bat.
        if outline:
                if glow_enabled:
                        outline.color = Color(cube_color.r + 0.3, cube_color.g + 0.3, cube_color.b + 0.3, 1.0)
                else:
                        outline.color = Color(0.05, 0.07, 0.15, 1.0)


func _apply_icon_shape() -> void:
        # Doi hinh dang polygon cua Body + Outline + InnerHighlight theo icon_type.
        var shape: PackedVector2Array
        var shape_out: PackedVector2Array
        var shape_in: PackedVector2Array
        match icon_type:
                1:  # Circle (16-gon)
                        shape = _circle_polygon(20.0, 16)
                        shape_out = _circle_polygon(24.0, 16)
                        shape_in = _circle_polygon(14.0, 16)
                2:  # Triangle
                        shape = PackedVector2Array(0, -22, 20, 18, -20, 18)
                        shape_out = PackedVector2Array(0, -26, 24, 22, -24, 22)
                        shape_in = PackedVector2Array(0, -14, 12, 10, -12, 10)
                3:  # Diamond
                        shape = PackedVector2Array(0, -22, 22, 0, 0, 22, -22, 0)
                        shape_out = PackedVector2Array(0, -26, 26, 0, 0, 26, -26, 0)
                        shape_in = PackedVector2Array(0, -14, 14, 0, 0, 14, -14, 0)
                4:  # Hexagon
                        shape = _hexagon_polygon(22.0)
                        shape_out = _hexagon_polygon(26.0)
                        shape_in = _hexagon_polygon(14.0)
                _:  # Cube (default)
                        shape = PackedVector2Array(-20, -20, 20, -20, 20, 20, -20, 20)
                        shape_out = PackedVector2Array(-24, -24, 24, -24, 24, 24, -24, 24)
                        shape_in = PackedVector2Array(-14, -14, 14, -14, 14, -4, -14, -4)
        if sprite:
                sprite.polygon = shape
        if outline:
                outline.polygon = shape_out
        if inner_highlight:
                inner_highlight.polygon = shape_in


func _circle_polygon(radius: float, segments: int) -> PackedVector2Array:
        var pts := PackedVector2Array()
        for i in segments:
                var angle := TAU * float(i) / float(segments)
                pts.append(Vector2(cos(angle) * radius, sin(angle) * radius))
        return pts


func _hexagon_polygon(radius: float) -> PackedVector2Array:
        return _circle_polygon(radius, 6)


func _load_audio() -> void:
        # Load audio streams - bao ve neu file khong ton tai.
        var jump_path := "res://assets/sfx/jump.wav"
        var death_path := "res://assets/sfx/death.wav"
        var land_path := "res://assets/sfx/land.wav"
        if ResourceLoader.exists(jump_path) and jump_sfx:
                jump_sfx.stream = load(jump_path)
        if ResourceLoader.exists(death_path) and death_sfx:
                death_sfx.stream = load(death_path)
        if ResourceLoader.exists(land_path) and land_sfx:
                land_sfx.stream = load(land_path)


func _setup_particles() -> void:
        if trail_particles:
                trail_particles.emitting = not GameManager.reduced_motion
                trail_particles.color = trail_color
        if land_particles:
                land_particles.emitting = false
                land_particles.color = land_color
        if death_particles:
                death_particles.emitting = false
                death_particles.color = cube_color


func _physics_process(delta: float) -> void:
        if is_dead:
                return

        # Gravity
        velocity.y += gravity * delta
        if velocity.y > max_fall_speed:
                velocity.y = max_fall_speed

        # Jump buffer + coyote time
        _jump_buffered -= delta
        if _coyote_time > 0.0:
                _coyote_time -= delta
        if _jump_buffered > 0.0 and (is_grounded or _coyote_time > 0.0):
                do_jump()

        # Auto-run right
        velocity.x = run_speed

        _was_grounded = is_grounded
        move_and_slide()

        # Cap nhat ground state
        var was_grounded_before := is_grounded
        is_grounded = _check_grounded()
        # Coyote: vua roi khoi mat dat -> cap nho thoi gian grace.
        if was_grounded_before and not is_grounded and velocity.y >= 0.0:
                _coyote_time = COYOTE_TIME

        # Rotation khi bay - chi rotate visual_root (khong rotate collision).
        if not is_grounded:
                visual_root.rotation += rotation_speed_air * delta
        else:
                # Snap ve 0 deg gan nhat (0, 90, 180, 270) - nhanh hon de trau kinh nghiem.
                var snapped := round(visual_root.rotation / (PI / 2.0)) * (PI / 2.0)
                # Delta-corrected lerp (frame-rate independent).
                var lerp_weight := 1.0 - exp(-delta * 18.0)
                visual_root.rotation = lerp(visual_root.rotation, snapped, lerp_weight)
                # Dam bao snap hoan toan khi gan.
                if abs(visual_root.rotation - snapped) < 0.02:
                        visual_root.rotation = snapped

        # Landing event
        if is_grounded and not _was_grounded:
                emit_signal("landed")
                if land_particles and not GameManager.reduced_motion:
                        land_particles.emitting = true
                        land_particles.restart()
                if land_sfx and GameManager.sfx_enabled and land_sfx.stream:
                        land_sfx.play()

        # Cap nhat score khoang cach (chi tinh tien le, khong tinh lui).
        if global_position.x > _max_x_reached:
                var dx := global_position.x - _max_x_reached
                _max_x_reached = global_position.x
                GameManager.add_distance_score(dx)


func _check_grounded() -> bool:
        # Kiem tra normal cua cac collision vua xay ra
        for i in range(get_slide_collision_count()):
                var c := get_slide_collision(i)
                if c.get_normal().y < -0.5:
                        return true
        # Ray nho duoi chan
        var space := get_world_2d().direct_space_state
        var from := global_position + Vector2(0, 22)
        var to := global_position + Vector2(0, 30)
        # FIX v0.3: PhysicsRayQueryParameters2D.create 4th param phai la Array[RID],
        # khong phai Node. Loai bo self khoi exclude.
        var q := PhysicsRayQueryParameters2D.create(from, to, collision_mask)
        q.exclude = [get_rid()]
        var hit := space.intersect_ray(q)
        return hit.size() > 0


func _unhandled_input(event: InputEvent) -> void:
        if is_dead:
                return
        if event.is_action_pressed("jump"):
                _jump_buffered = JUMP_BUFFER_TIME
                if is_grounded or _coyote_time > 0.0:
                        do_jump()


func do_jump() -> void:
        velocity.y = jump_velocity
        _jump_buffered = 0.0
        _coyote_time = 0.0
        is_grounded = false
        visual_root.rotation = 0.0
        emit_signal("jumped")
        GameManager.register_jump()
        _play_jump_sfx()


func _play_jump_sfx() -> void:
        if jump_sfx and GameManager.sfx_enabled and jump_sfx.stream:
                jump_sfx.pitch_scale = 1.0 if randf() < 0.7 else 1.08  # variation nho
                jump_sfx.play()


func bounce() -> void:
        # Duoc goi khi player dap vao Bouncer.
        velocity.y = bouncer_boost
        _jump_buffered = 0.0
        _coyote_time = 0.0
        is_grounded = false
        visual_root.rotation = 0.0
        emit_signal("jumped")
        GameManager.register_jump()
        _play_jump_sfx()


func die() -> void:
        if is_dead:
                return
        is_dead = true
        velocity = Vector2.ZERO
        if trail_particles:
                trail_particles.emitting = false
        emit_signal("died")
        GameManager.register_death()
        if death_sfx and GameManager.sfx_enabled and death_sfx.stream:
                death_sfx.play()
        if death_particles and not GameManager.reduced_motion:
                death_particles.emitting = true
                death_particles.restart()
        sprite.visible = false
        outline.visible = false
        collision.set_deferred("disabled", true)


func set_color(c: Color) -> void:
        cube_color = c
        _apply_color()
        _apply_glow()
        emit_signal("color_changed", c)


func set_glow(enabled: bool) -> void:
        glow_enabled = enabled
        _apply_glow()


func set_icon_type(t: int) -> void:
        icon_type = clamp(t, 0, 4)
        _apply_icon_shape()


func refresh_from_profile() -> void:
        # Goi khi PlayerProfile thay doi (tu ColoursPalette popup).
        _apply_profile()
