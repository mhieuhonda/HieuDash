#!/usr/bin/env python3
"""
Fix Android app name localization issue.

Problem: Godot 4.7's gradle export only replaces the 'godot-project-name' placeholder
in the default res/values/godot_project_name_string.xml. The localized files
(res/values-vi/, res/values-en/, etc.) keep their placeholder
'godot-project-name-vi', 'godot-project-name-en', etc.

When the user's device is in Vietnamese locale, Android picks values-vi/ which
still has the placeholder 'godot-project-name-vi' - that's what the user sees
instead of 'Hieu Dash'.

Fix: Overwrite ALL godot_project_name_string.xml files (default + localized)
with the correct app name 'Hieu Dash'. This is committed to the repo as part
of android/build/ so the fix persists.

Run this script once to apply the fix. It's idempotent.
"""
import os
import sys
import glob

APP_NAME = "Hieu Dash"
XML_TEMPLATE = """<?xml version="1.0" encoding="utf-8"?>
<!-- WARNING: THIS FILE WILL BE OVERWRITTEN AT BUILD TIME-->
<resources>
    <string name="godot_project_name_string">{name}</string>
</resources>
"""

def main():
    # Path to android/build/res/ in the project
    script_dir = os.path.dirname(os.path.abspath(__file__))
    repo_root = os.path.abspath(os.path.join(script_dir, ".."))
    res_dir = os.path.join(repo_root, "android", "build", "res")

    if not os.path.isdir(res_dir):
        print(f"ERROR: res directory not found: {res_dir}", file=sys.stderr)
        print("Make sure android/build/ is installed (Project -> Install Android Build Template)", file=sys.stderr)
        return 1

    # Find all godot_project_name_string.xml files
    pattern = os.path.join(res_dir, "values*", "godot_project_name_string.xml")
    files = glob.glob(pattern)
    if not files:
        print("ERROR: No godot_project_name_string.xml files found", file=sys.stderr)
        return 1

    print(f"Found {len(files)} godot_project_name_string.xml files")
    print(f"Overwriting all with app name: '{APP_NAME}'")
    print()

    for f in sorted(files):
        rel = os.path.relpath(f, repo_root)
        # Determine locale from path
        locale = "default"
        parent = os.path.basename(os.path.dirname(f))
        if parent != "values":
            # values-vi -> vi, values-zh-rTW -> zh-rTW
            locale = parent.replace("values-", "")

        # Check current content
        with open(f, "r", encoding="utf-8") as fh:
            old = fh.read()

        # Skip if already correct (idempotent)
        if f">{APP_NAME}<" in old:
            print(f"  OK   {rel} (locale={locale}) - already correct")
            continue

        # Write new content
        new_content = XML_TEMPLATE.format(name=APP_NAME)
        with open(f, "w", encoding="utf-8") as fh:
            fh.write(new_content)
        print(f"  FIX  {rel} (locale={locale}) - updated to '{APP_NAME}'")

    print()
    print(f"Done. All {len(files)} files now contain '{APP_NAME}'.")
    return 0

if __name__ == "__main__":
    sys.exit(main())
