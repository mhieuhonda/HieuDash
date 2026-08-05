extends RefCounted
class_name HDColorPalette
## HDColorPalette - bo 106 mau port tu GDPS-Editor-22 GameManager_colorForIdx_hook.
## Cung cap ham static color_for_idx(idx) tra ve Color tuong ung.
## Dieu chinh ten tu ColorPalette -> HDColorPalette de tranh xung dot native class trong Godot 4.7.
##
## Cach dung:
##   var c: Color = HDColorPalette.color_for_idx(0)
##   var palette: Array[Color] = HDColorPalette.COLORS

# 106 mau goc tu GDPS-Editor-22 (port nguyen values RGB).
const COLORS: Array[Color] = [
        Color(0.49, 1.0, 0.0),      # 0 - lime green
        Color(0.0, 1.0, 0.392),     # 1
        Color(0.0, 1.0, 0.788),     # 2
        Color(0.0, 0.886, 1.0),     # 3 - cyan
        Color(0.0, 0.49, 1.0),      # 4
        Color(0.0, 0.094, 1.0),     # 5
        Color(0.094, 0.0, 1.0),     # 6
        Color(0.49, 0.0, 1.0),      # 7
        Color(0.886, 0.0, 1.0),     # 8
        Color(1.0, 0.0, 0.886),     # 9
        Color(1.0, 0.0, 0.49),      # 10
        Color(1.0, 0.0, 0.094),     # 11
        Color(1.0, 0.094, 0.0),     # 12
        Color(1.0, 0.49, 0.0),      # 13
        Color(1.0, 0.886, 0.0),     # 14 - yellow
        Color(0.886, 1.0, 0.0),     # 15
        Color(0.49, 1.0, 0.0),      # 16
        Color(0.094, 1.0, 0.0),     # 17
        Color(0.0, 1.0, 0.094),     # 18
        Color(0.0, 1.0, 0.49),      # 19
        Color(0.0, 1.0, 0.886),     # 20
        Color(0.0, 0.96, 1.0),      # 21
        Color(0.0, 0.55, 1.0),      # 22
        Color(0.0, 0.15, 1.0),      # 23
        Color(0.15, 0.0, 1.0),      # 24
        Color(0.55, 0.0, 1.0),      # 25
        Color(0.96, 0.0, 1.0),      # 26
        Color(1.0, 0.0, 0.96),      # 27
        Color(1.0, 0.0, 0.55),      # 28
        Color(1.0, 0.0, 0.15),      # 29
        Color(1.0, 0.15, 0.0),      # 30
        Color(1.0, 0.55, 0.0),      # 31
        Color(1.0, 0.96, 0.0),      # 32
        Color(0.96, 1.0, 0.0),      # 33
        Color(0.55, 1.0, 0.0),      # 34
        Color(0.15, 1.0, 0.0),      # 35
        Color(0.0, 1.0, 0.15),      # 36
        Color(0.0, 1.0, 0.55),      # 37
        Color(0.0, 1.0, 0.96),      # 38
        Color(1.0, 1.0, 1.0),       # 39 - white
        Color(0.886, 0.886, 0.886), # 40
        Color(0.788, 0.788, 0.788), # 41
        Color(0.686, 0.686, 0.686), # 42
        Color(0.588, 0.588, 0.588), # 43
        Color(0.49, 0.49, 0.49),    # 44
        Color(0.392, 0.392, 0.392), # 45
        Color(0.294, 0.294, 0.294), # 46
        Color(0.196, 0.196, 0.196), # 47
        Color(0.094, 0.094, 0.094), # 48
        Color(0.0, 0.0, 0.0),       # 49 - black
        Color(0.49, 0.0, 0.0),      # 50 - dark red
        Color(0.0, 0.49, 0.0),      # 51 - dark green
        Color(0.0, 0.0, 0.49),      # 52 - dark blue
        Color(0.49, 0.49, 0.0),     # 53 - dark yellow
        Color(0.49, 0.0, 0.49),     # 54 - dark magenta
        Color(0.0, 0.49, 0.49),     # 55 - dark cyan
        Color(0.788, 0.788, 0.0),   # 56
        Color(0.788, 0.0, 0.788),   # 57
        Color(0.0, 0.788, 0.788),   # 58
        Color(0.788, 0.392, 0.0),   # 59 - orange
        Color(0.788, 0.0, 0.392),   # 60 - pink
        Color(0.392, 0.788, 0.0),   # 61 - lime
        Color(0.392, 0.0, 0.788),   # 62 - purple
        Color(0.0, 0.788, 0.392),   # 63 - mint
        Color(0.0, 0.392, 0.788),   # 64 - sky blue
        Color(0.886, 0.886, 0.392), # 65 - light yellow
        Color(0.886, 0.392, 0.886), # 66 - light magenta
        Color(0.392, 0.886, 0.886), # 67 - light cyan
        Color(1.0, 0.5, 0.0),       # 68 - bright orange
        Color(1.0, 0.0, 0.5),       # 69 - bright pink
        Color(0.5, 1.0, 0.0),       # 70 - bright lime
        Color(0.5, 0.0, 1.0),       # 71 - bright purple
        Color(0.0, 1.0, 0.5),       # 72 - bright mint
        Color(0.0, 0.5, 1.0),       # 73 - bright sky
        Color(1.0, 0.5, 0.5),       # 74 - salmon
        Color(0.5, 1.0, 0.5),       # 75 - light green
        Color(0.5, 0.5, 1.0),       # 76 - light blue
        Color(1.0, 1.0, 0.5),       # 77 - pastel yellow
        Color(1.0, 0.5, 1.0),       # 78 - pastel pink
        Color(0.5, 1.0, 1.0),       # 79 - pastel cyan
        Color(0.6, 0.4, 0.2),       # 80 - brown
        Color(0.4, 0.2, 0.0),       # 81 - dark brown
        Color(0.8, 0.6, 0.4),       # 82 - tan
        Color(0.6, 0.8, 0.6),       # 83 - sage
        Color(0.4, 0.6, 0.8),       # 84 - steel blue
        Color(0.8, 0.4, 0.6),       # 85 - rose
        Color(0.95, 0.75, 0.85),    # 86 - blush
        Color(0.85, 0.95, 0.75),    # 87 - spring
        Color(0.75, 0.85, 0.95),    # 88 - ice
        Color(0.95, 0.85, 0.75),    # 89 - peach
        Color(0.85, 0.75, 0.95),    # 90 - lavender
        Color(0.75, 0.95, 0.85),    # 91 - mint cream
        Color(0.95, 0.95, 0.75),    # 92 - cream
        Color(0.75, 0.75, 0.95),    # 93 - periwinkle
        Color(0.95, 0.75, 0.75),    # 94 - misty rose
        Color(0.33, 0.33, 0.5),     # 95 - dark slate
        Color(0.5, 0.33, 0.33),     # 96 - dark maroon
        Color(0.33, 0.5, 0.33),     # 97 - forest
        Color(0.33, 0.33, 0.66),    # 98 - navy
        Color(0.66, 0.33, 0.33),    # 99 - crimson
        Color(0.33, 0.66, 0.33),    # 100 - olive green
        Color(0.33, 0.33, 0.33),    # 101 - charcoal
        Color(0.66, 0.66, 0.33),    # 102 - olive
        Color(0.66, 0.33, 0.66),    # 103 - plum
        Color(0.33, 0.66, 0.66),    # 104 - teal
        Color(0.66, 0.66, 0.66),    # 105 - silver
]


static func color_for_idx(idx: int) -> Color:
        if idx < 0 or idx >= COLORS.size():
                return Color(0.25, 0.85, 1.0, 1.0)  # default cyan
        return COLORS[idx]


static func get_count() -> int:
        return COLORS.size()


static func find_nearest_idx(c: Color) -> int:
        # Tim idx co Color gan nhat voi c (so sanh khoang cach RGB).
        var best_idx := 0
        var best_dist := 999999.0
        for i in COLORS.size():
                var dc: Color = COLORS[i]
                var dist := (dc.r - c.r) ** 2 + (dc.g - c.g) ** 2 + (dc.b - c.b) ** 2
                if dist < best_dist:
                        best_dist = dist
                        best_idx = i
        return best_idx
