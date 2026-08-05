extends Node
## GameManager (Autoload)
## Quan ly state toan cuc: high score, attempts, settings, scene transitions.
## Singleton duoc load tu dong qua [autoload] trong project.godot.

signal score_changed(score: int)
signal coins_changed(coins: int)
signal best_score_changed(score: int)

# ---- Persistent state (luu qua user:// hieu_dash.save) ----
var best_score: int = 0
var total_coins: int = 0
var total_attempts: int = 0
var total_jumps: int = 0
var total_deaths: int = 0
var total_completions: int = 0

# ---- Runtime state ----
var current_score: int = 0
var current_coins: int = 0
var current_attempts: int = 0
var selected_level: int = 1
var music_enabled: bool = true
var sfx_enabled: bool = true
var reduced_motion: bool = false

# ---- Scoring constants ----
const COIN_SCORE := 50
const COMPLETION_BONUS := 1000
const DISTANCE_SCORE_DIVISOR := 10.0

const SAVE_PATH := "user://hieu_dash.save"

func _ready() -> void:
	load_progress()

# ---- Persistence ----
func load_progress() -> void:
	if not FileAccess.file_exists(SAVE_PATH):
		return
	var f := FileAccess.open(SAVE_PATH, FileAccess.READ)
	if f == null:
		push_warning("HieuDash: khong mo duoc file save.")
		return
	var data: Dictionary = {}
	var raw := f.get_as_text()
	f.close()
	if raw.strip_edges() == "":
		return
	var parsed = JSON.parse_string(raw)
	if typeof(parsed) == TYPE_DICTIONARY:
		data = parsed
	best_score = int(data.get("best_score", 0))
	total_coins = int(data.get("total_coins", 0))
	total_attempts = int(data.get("total_attempts", 0))
	total_jumps = int(data.get("total_jumps", 0))
	total_deaths = int(data.get("total_deaths", 0))
	total_completions = int(data.get("total_completions", 0))
	selected_level = int(data.get("selected_level", 1))
	music_enabled = bool(data.get("music_enabled", true))
	sfx_enabled = bool(data.get("sfx_enabled", true))
	reduced_motion = bool(data.get("reduced_motion", false))

func save_progress() -> void:
	var data := {
		"best_score": best_score,
		"total_coins": total_coins,
		"total_attempts": total_attempts,
		"total_jumps": total_jumps,
		"total_deaths": total_deaths,
		"total_completions": total_completions,
		"selected_level": selected_level,
		"music_enabled": music_enabled,
		"sfx_enabled": sfx_enabled,
		"reduced_motion": reduced_motion,
		"version": "0.2.0",
	}
	var f := FileAccess.open(SAVE_PATH, FileAccess.WRITE)
	if f == null:
		push_warning("HieuDash: khong ghi duoc file save.")
		return
	f.store_string(JSON.stringify(data, "\t"))
	f.close()

# ---- Runtime API ----
func reset_run() -> void:
	current_score = 0
	current_coins = 0
	current_attempts += 1
	total_attempts += 1
	emit_signal("score_changed", current_score)
	emit_signal("coins_changed", current_coins)

func add_score(amount: int) -> void:
	current_score += amount
	emit_signal("score_changed", current_score)
	if current_score > best_score:
		best_score = current_score
		emit_signal("best_score_changed", best_score)

func add_distance_score(distance_px: float) -> void:
	# Chuyen khoang cach (px) thanh score, chi tinh tien le.
	var gained := int(distance_px / DISTANCE_SCORE_DIVISOR)
	if gained > 0:
		add_score(gained)

func add_coin() -> void:
	current_coins += 1
	total_coins += 1
	add_score(COIN_SCORE)
	emit_signal("coins_changed", current_coins)

func register_completion() -> void:
	total_completions += 1

func register_jump() -> void:
	total_jumps += 1

func register_death() -> void:
	total_deaths += 1

func commit_run_to_save() -> void:
	save_progress()

# ---- Level helpers ----
func get_level_seed() -> int:
	# Seed xac dinh theo level hien tai -> level lien tuc khong trung.
	return 1337 + selected_level * 7

func advance_level() -> void:
	selected_level += 1
	save_progress()

# ---- Scene helpers ----
func goto(scene_path: String) -> void:
	get_tree().change_scene_to_file(scene_path)

func quit_game() -> void:
	save_progress()
	get_tree().quit()
