#include QMK_KEYBOARD_H
#include "tap_dance.h"
#include "keycodes.h"
#include "combos.h"
#include "features/achordion.h"
#include "tap_hold.h"
#include "shifted.h"
#include "override.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[DEF] = LAYOUT_69_ansi(
        _NO,   _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     _NO,      _NO,      _NO,      _NO,      _NO,
        _NO,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,     _NO,      _NO,      _NO,     _NO,
        _NO,   _HR_0,   _HR_1,   _HR_2,   _HR_3,   KC_G,             KC_H,    _HR_6,   _HR_7,   _HR_8,    _HR_9,    _NO,      _NO,      _NO,
        _NO,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _NO,     KC_N,    KC_M,    _COMM,   _DOT,     _SLSH,    _NO,      _NO,
        _NO,   _NO,     _NO,     _NOR,             _NO,     _NO,     _BSPC,   _NO,     _NO,     _NO,      _NO
),

[NAV] = LAYOUT_69_ansi(
        _NO,   _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     _NO,      _NO,      _NO,      _NO,      _NO,
        _NO,   _NO,     _NO,     _NO,     _NO,     _NO,              _NO,     _NO,     _NO,     _NO,      _NO,      _NO,      _NO,      _NO,      _NO,
        _NO,   _HOME,   _PGDN,   _PGUP,   _SFT,    _NO,              _SX,     _DN,     _UP,     _DX,      _END,     _NO,      _NO,      _NO,
        _NO,   _UNDO,   _CUT,    _COPY,   _PASTE,  _REDO,   _NO,     _NO,     _NO,     _NO,     _NO,      _NO,      _NO,      _NO,
        _NO,   _NO,     _NO,     _NO,              _NO,     _NO,     _ESC,    _NO,     _NO,     _NO,      _NO
),

[NUM] = LAYOUT_69_ansi(
        _NO,   _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     _NO,      _NO,      _NO,      _NO,      _NO,
        _NO,   _NO,     _NO,     _NO,     _NO,     _NO,              _NO,     KC_7,    KC_8,    KC_9,     _NO,      _NO,      _NO,      _NO,      _NO,
        _NO,   _CMD,    _NO,     _NO,     KC_0,    _NO,              _MINS,   KC_4,    KC_5,    KC_6,     _PLUS,    _NO,      _NO,      _NO,
        _NO,   _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     KC_1,    KC_2,    _T_3,     _SLSH,    _NO,      _NO,
        _NO,   _NO,     _NO,     _NO,              _NO,     _NO,     _TRNS,     _NO,     _NO,     _NO,      _NO
),

[MIX] = LAYOUT_69_ansi(
        _NO,   _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     _NO,      _NO,      _NO,      _NO,      _NO,
        _NO,   _MEH_Q,  _MEH_W,  _MEH_E,  _MEH_R,  _MEH_T,           _NO,     _NO,     _NO,     _NO,      _NO,      _NO,      _NO,      _NO,      _NO,
        _NO,   _MEH_A,  _MEH_S,  _MEH_D,  _MEH_F,  _MEH_G,           _NO,     _NO,     _NO,     _NO,      _NO,      _NO,      _NO,      _NO,
        _NO,   _MEH_Z,  _MEH_X,  _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     _NO,     _NO,      _NO,      _NO,      _NO,
        _NO,   _NO,     _NO,     _NO,              _NO,     _NO,     _NO,     _NO,     _NO,     _NO,      _NO
),
};
// clang-format on



