extends CharacterBody2D
## Player - cube tu chay sang phai, nhan jump de nhay.
## Style Geometry Dash: gravity nhanh, jump height co dinh, speed fixed.
class_name Player

signal died
signal landed
signal jumped

@export_group("Movement")
@export var run_speed: float = 360.0
@export var jump_velocity: float = -680.0
@export var gravity: float = 1800.0
@export var max_fall_speed: float = 1400.0
@export var rotation_speed_air: float = 7.5  # rad/s khi bay

@export_group("Visuals")
@export var cube_color: Color = Color(0.25, 0.85, 1.0, 1.0)
@export var trail_color: Color = Color(0.25, 0.85, 1.0, 0.6)
@export var land_color: Color = Color(1.0, 0.95, 0.5, 1.0)

var is_dead: bool = false
var is_grounded: bool = false
var _was_grounded: bool = false
var _jump_buffered: float = 0.0  # giay con lai de thuc hien jump buffer
const JUMP_BUFFER_TIME := 0.12

@onready var sprite: Polygon2D = $Body
@onready var outline: Polygon2D = $Body/Outline
@onready var collision: CollisionShape2D = $Collision
@onready var trail_particles: CPUParticles2D = $TrailParticles
@onready var jump_sfx: AudioStreamPlayer = $JumpSfx
@onready var death_sfx: AudioStreamPlayer = $DeathSfx
@onready var land_particles: CPUParticles2D = $LandParticles
@onready var death_particles: CPUParticles2D = $DeathParticles


func _ready() -> void:
        add_to_group("player")
        _apply_color()
        _setup_particles()


func _apply_color() -> void:
        sprite.color = cube_color


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

        # Jump buffer
        _jump_buffered -= delta
        if _jump_buffered > 0.0 and is_grounded:
                do_jump()

        # Auto-run right
        velocity.x = run_speed

        _was_grounded = is_grounded
        move_and_slide()

        # Cap nhat ground state
        is_grounded = _check_grounded()

        # Rotation khi bay
        if not is_grounded:
                rotation += rotation_speed_air * delta
        else:
                # Snap ve 0 deg gan nhat (0, 90, 180, 270)
                var snapped := round(rotation / (PI / 2.0)) * (PI / 2.0)
                rotation = lerp(rotation, snapped, 0.4)

        # Landing event
        if is_grounded and not _was_grounded:
                emit_signal("landed")
                if land_particles and not GameManager.reduced_motion:
                        land_particles.emitting = true
                        land_particles.restart()


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
        var q := PhysicsRayQueryParameters2D.create(from, to, collision_mask, self)
        var hit := space.intersect_ray(q)
        return hit.size() > 0


func _unhandled_input(event: InputEvent) -> void:
        if is_dead:
                return
        if event.is_action_pressed("jump"):
                _jump_buffered = JUMP_BUFFER_TIME
                if is_grounded:
                        do_jump()


func do_jump() -> void:
        velocity.y = jump_velocity
        _jump_buffered = 0.0
        is_grounded = false
        rotation = 0.0
        emit_signal("jumped")
        GameManager.register_jump()
        if jump_sfx and GameManager.sfx_enabled:
                jump_sfx.play()


func die() -> void:
        if is_dead:
                return
        is_dead = true
        velocity = Vector2.ZERO
        if trail_particles:
                trail_particles.emitting = false
        emit_signal("died")
        GameManager.register_death()
        if death_sfx and GameManager.sfx_enabled:
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
