class_name LevelGenerator
## Sinh level procedural dua tren seed.
## Tra ve Dictionary chua danh sach entities va thong so level.
##
## Format entity:
##   { "type": "spike"|"block"|"coin"|"gap", "x": float, "y": float, "w": float }

const SPIKE_W := 44.0
const BLOCK_W := 80.0
const FLOOR_Y := 540.0  # toa do mat dat (tam cube cach 20)

static func generate(seed_value: int, length: float = 8000.0, difficulty: float = 1.0) -> Dictionary:
	var rng := RandomNumberGenerator.new()
	rng.seed = seed_value
	var entities := []
	# Cuong do kho tang dan theo x
	var cursor := 700.0  # bat dau x sau khu "warmup"
	while cursor < length - 600.0:
		var t := cursor / length  # 0..1
		var diff := clamp(difficulty * (0.6 + 0.8 * t), 0.6, 2.2)
		var choice := rng.randf()
		if choice < 0.5:
			# Single spike hoac cluster spikes
			var count := 1
			if rng.randf() < 0.25 * diff:
				count = 2
			if rng.randf() < 0.12 * diff and count == 2:
				count = 3
			for i in count:
				entities.append({
					"type": "spike",
					"x": cursor + i * SPIKE_W,
					"y": FLOOR_Y,
				})
			cursor += SPIKE_W * float(count) + rng.randf_range(160.0, 240.0) * (1.4 / diff)
		elif choice < 0.78:
			# Block can nhay len
			var h := 1
			if rng.randf() < 0.3 * diff:
				h = 2
			var block_y := FLOOR_Y - 40.0 - (float(h) - 1.0) * 80.0
			entities.append({
				"type": "block",
				"x": cursor,
				"y": block_y,
				"h": h,
			})
			# Coin tren block
			if rng.randf() < 0.55:
				entities.append({
					"type": "coin",
					"x": cursor,
					"y": block_y - 80.0,
				})
			cursor += BLOCK_W + rng.randf_range(180.0, 280.0) * (1.4 / diff)
		else:
			# Coin don le, co khi tren khong
			var cy := FLOOR_Y - 70.0 - rng.randf_range(0.0, 80.0)
			entities.append({
				"type": "coin",
				"x": cursor,
				"y": cy,
			})
			cursor += rng.randf_range(160.0, 260.0)
	# Them coin phu tren khong giua cac spike
	# Them goal o cuoi
	entities.append({
		"type": "goal",
		"x": length - 80.0,
		"y": FLOOR_Y - 40.0,
	})
	return {
		"length": length,
		"floor_y": FLOOR_Y,
		"entities": entities,
		"seed": seed_value,
	}
