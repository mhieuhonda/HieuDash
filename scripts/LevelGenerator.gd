class_name LevelGenerator
## Sinh level procedural dua tren seed.
## Tra ve Dictionary chua danh sach entities va thong so level.
##
## Format entity:
##   { "type": "spike"|"block"|"coin"|"saw"|"pit"|"spike_strip"|"bouncer"|"crusher"|"laser"|"moving_platform"|"goal",
##     "x": float, "y": float, ... }

const SPIKE_W := 44.0
const BLOCK_W := 80.0
const FLOOR_Y := 540.0  # toa do mat dat (tam cube cach 20)
const PIT_DEFAULT_W := 120.0


static func generate(seed_value: int, length: float = 8000.0, difficulty: float = 1.0) -> Dictionary:
        var rng := RandomNumberGenerator.new()
        rng.seed = seed_value
        var entities := []
        # Cuong do kho tang dan theo x
        var cursor := 700.0  # bat dau x sau khu "warmup"
        while cursor < length - 600.0:
                var t: float = cursor / length  # 0..1
                var diff: float = clamp(difficulty * (0.6 + 0.8 * t), 0.6, 2.2)
                var choice := rng.randf()
                # Probabilities scale voi diff (cuong do kho).
                if choice < 0.30:
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
                elif choice < 0.42:
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
                elif choice < 0.55 and t > 0.15:
                        # Saw (luoi ca) - dat tren mat dat hoac treo nhe.
                        var saw_y := FLOOR_Y if rng.randf() < 0.7 else FLOOR_Y - 120.0
                        entities.append({
                                "type": "saw",
                                "x": cursor,
                                "y": saw_y,
                        })
                        cursor += 120.0 + rng.randf_range(140.0, 220.0) * (1.4 / diff)
                elif choice < 0.66 and t > 0.25:
                        # Pit (ho gap) - phai nhay qua.
                        var pit_w := rng.randf_range(90.0, 160.0) * (0.8 + 0.5 * diff)
                        entities.append({
                                "type": "pit",
                                "x": cursor,
                                "y": FLOOR_Y,
                                "w": pit_w,
                        })
                        # Coin giua pit (khuyen khich nhay).
                        if rng.randf() < 0.5:
                                entities.append({
                                        "type": "coin",
                                        "x": cursor,
                                        "y": FLOOR_Y - 130.0,
                                })
                        cursor += pit_w + rng.randf_range(140.0, 200.0)
                elif choice < 0.74 and t > 0.20:
                        # SpikeStrip (day spike dai)
                        var n := int(rng.randi_range(3, 5)) + (1 if diff > 1.5 else 0)
                        entities.append({
                                "type": "spike_strip",
                                "x": cursor,
                                "y": FLOOR_Y,
                                "count": n,
                        })
                        cursor += float(n) * SPIKE_W + rng.randf_range(180.0, 260.0)
                elif choice < 0.82 and t > 0.30:
                        # Bouncer (dem nay) - boost cao hon.
                        entities.append({
                                "type": "bouncer",
                                "x": cursor,
                                "y": FLOOR_Y,
                        })
                        # Coin cao phia sau bouncer.
                        entities.append({
                                "type": "coin",
                                "x": cursor + 60.0,
                                "y": FLOOR_Y - 200.0,
                        })
                        entities.append({
                                "type": "coin",
                                "x": cursor + 120.0,
                                "y": FLOOR_Y - 220.0,
                        })
                        cursor += 220.0 + rng.randf_range(140.0, 200.0)
                elif choice < 0.89 and t > 0.35:
                        # Crusher (khoi roi xuong)
                        entities.append({
                                "type": "crusher",
                                "x": cursor,
                                "y": FLOOR_Y - 60.0,
                                "period": rng.randf_range(1.6, 2.4),
                        })
                        cursor += 180.0 + rng.randf_range(140.0, 220.0) * (1.4 / diff)
                elif choice < 0.95 and t > 0.40:
                        # Laser (tia laser bat tat)
                        var laser_y := FLOOR_Y - rng.randf_range(120.0, 240.0)
                        entities.append({
                                "type": "laser",
                                "x": cursor,
                                "y": laser_y,
                                "period": rng.randf_range(1.4, 2.2),
                        })
                        cursor += 180.0 + rng.randf_range(120.0, 200.0)
                elif t > 0.45:
                        # MovingPlatform (nen di chuyen)
                        var axis := "x" if rng.randf() < 0.6 else "y"
                        entities.append({
                                "type": "moving_platform",
                                "x": cursor,
                                "y": FLOOR_Y - 80.0,
                                "range": rng.randf_range(120.0, 220.0),
                                "speed": rng.randf_range(80.0, 140.0),
                                "axis": axis,
                        })
                        cursor += 220.0 + rng.randf_range(140.0, 200.0)
                else:
                        # Coin don le, co khi tren khong
                        var cy := FLOOR_Y - 70.0 - rng.randf_range(0.0, 80.0)
                        entities.append({
                                "type": "coin",
                                "x": cursor,
                                "y": cy,
                        })
                        cursor += rng.randf_range(160.0, 260.0)
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
                "difficulty": difficulty,
        }
