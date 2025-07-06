#include QMK_KEYBOARD_H

bool get_mod_tap_interrupt(uint16_t keycode) {
	switch (keycode) {
		case KC_SCLN:
			return false;
		default:
			return true;
	}
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case 7:
			if (record->event.pressed) {
				layer_invert(7);
			}
			return false;
	}
	return true;
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3_ex2(
        KC_NO, KC_Q,         KC_W,         KC_E,          KC_R,          KC_T,         KC_VOLU,             KC_MUTE,      KC_Y, KC_U,          KC_I,           KC_O,           KC_P,            KC_NO,
        KC_NO, LALT_T(KC_A), LGUI_T(KC_S), LCTL_T(KC_D),  LSFT_T(KC_F),  KC_G,         KC_VOLD,             KC_NO,        KC_H, LSFT_T(KC_J),  LCTL_T(KC_K),   LGUI_T(KC_L),   LALT_T(KC_SCLN), KC_QUOTE,
        KC_NO, KC_Z,         RALT_T(KC_X), KC_C,          KC_V,          KC_B,                                            KC_N, KC_M,          KC_COMM,        RALT_T(KC_DOT), KC_SLSH,         KC_NO,

                                                          LT(3,KC_ESC),  LT(1,KC_SPC), LT(2,KC_TAB),      LT(5,KC_ENT), LT(4,KC_BSPC),       LT(6,KC_DEL)
    ),

    [1] = LAYOUT_split_3x6_3_ex2(
        KC_NO, KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,             KC_NO,        KC_AGIN, KC_UNDO,       KC_CUT,        KC_COPY,       KC_PSTE,      KC_NO,
        KC_NO, KC_LALT,      KC_LGUI,      KC_LCTL,      KC_LSFT,      KC_NO,        KC_NO,             KC_NO,        KC_LEFT, KC_DOWN,       KC_UP,         KC_RGHT,       KC_CAPS,      KC_NO,
        KC_NO, KC_NO,        KC_RALT,      KC_NO,        KC_NO,        KC_NO,                                         KC_INS,  KC_HOME,       KC_PGDN,       KC_PGUP,       KC_END,       KC_NO,

                                                         KC_NO,        KC_NO,        KC_NO,             KC_ENT,       KC_BSPC,              KC_DEL
    ),

    [2] = LAYOUT_split_3x6_3_ex2(
        KC_NO, KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,             KC_NO,        KC_NO,   KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,
        KC_NO, KC_LALT,      KC_LGUI,      KC_LCTL,      KC_LSFT,      KC_NO,        KC_NO,             KC_NO,        KC_MS_L, KC_MS_D,      KC_MS_U,      KC_MS_R,      KC_NO,        KC_NO,
        KC_NO, KC_NO,        KC_RALT,      KC_NO,        KC_NO,        KC_NO,                                         KC_WH_L, KC_WH_D,      KC_WH_U,      KC_WH_R,      KC_NO,      KC_NO,

                                                         KC_NO,        KC_NO,        KC_NO,             KC_BTN2,      KC_BTN1, KC_BTN3
    ),

    [3] = LAYOUT_split_3x6_3_ex2(
        KC_NO, KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,             KC_NO,        RGB_TOG, RGB_MOD,      RGB_HUI,      RGB_SAI,      RGB_VAI,      KC_NO,
        KC_NO, KC_LALT,      KC_LGUI,      KC_LCTL,      KC_LSFT,      KC_NO,        KC_NO,             KC_NO,        KC_NO,   KC_MPRV,      KC_VOLD,      KC_VOLU,      KC_MNXT,      KC_NO,
        KC_NO, KC_NO,        KC_RALT,      KC_NO,        KC_NO,        KC_NO,                                           KC_NO,   KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,

                                                        KC_NO,        KC_NO,        KC_NO,             KC_MSTP,      KC_MPLY,              KC_MUTE
    ),

    [4] = LAYOUT_split_3x6_3_ex2(
        KC_NO, KC_LBRC,      KC_7,         KC_8,         KC_9,         KC_RBRC,      KC_NO,             KC_NO,        KC_NO,   KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,
        KC_NO, KC_SCLN,      KC_4,         KC_5,         KC_6,         KC_EQL,       KC_NO,             KC_NO,        KC_NO,   KC_LSFT,      KC_LCTL,      KC_LGUI,      KC_LALT,      KC_NO,
        KC_NO, KC_GRV,       KC_1,         KC_2,         KC_3,         KC_BSLS,                                        KC_NO,   KC_NO,        KC_NO,        KC_RALT,      KC_NO,        KC_NO,

                                                        KC_DOT,       KC_0,         KC_MINS,           KC_NO,        KC_NO,                KC_NO
    ),

    [5] = LAYOUT_split_3x6_3_ex2(
        KC_NO, KC_LCBR,      KC_AMPR,      KC_ASTR,      KC_LPRN,      KC_RCBR,      KC_NO,             KC_NO,        KC_NO,   KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,
        KC_NO, KC_COLN,      KC_DLR,       KC_PERC,      KC_CIRC,      KC_PLUS,      KC_NO,             KC_NO,        KC_NO,   KC_LSFT,      KC_LCTL,      KC_LGUI,      KC_LALT,      KC_NO,
        KC_NO, KC_TILD,      KC_EXLM,      KC_AT,        KC_HASH,      KC_PIPE,                                        KC_NO,   KC_NO,        KC_NO,        KC_RALT,      KC_NO,        KC_NO,

                                                        KC_LPRN,      KC_RPRN,      KC_UNDS,           KC_NO,        KC_NO,                KC_NO
    ),

    [6] = LAYOUT_split_3x6_3_ex2(
        KC_NO, KC_F12,       KC_F7,        KC_F8,        KC_F9,        KC_PSCR,      KC_NO,             KC_NO,        KC_NO,   KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,
        KC_NO, KC_F11,       KC_F4,        KC_F5,        KC_F6,        KC_SLCT,      KC_NO,             KC_NO,        KC_NO,   KC_LSFT,      KC_LCTL,      KC_LGUI,      KC_LALT,      KC_NO,
        KC_NO, KC_F10,       KC_F1,        KC_F2,        KC_F3,        KC_PAUS,                                        KC_NO,   KC_NO,        KC_NO,        KC_RALT,      KC_NO,        KC_NO,

                                                        KC_APP,       KC_SPC,       KC_TAB,            KC_NO,        KC_NO,                KC_NO
    ),

    [7] = LAYOUT_split_3x6_3_ex2(
        KC_NO,   KC_Q,         KC_W,         KC_E,          KC_R,          KC_T,         KC_VOLU,             KC_MUTE,      KC_Y, KC_U,          KC_I,           KC_O,           KC_P,            KC_NO,
        KC_LCTL, KC_A,         KC_S,         KC_D,          KC_F,          KC_G,         KC_VOLD,             KC_NO,        KC_H, KC_J,          KC_K,           KC_L,           KC_SCLN,         KC_QUOTE,
        KC_LSFT, KC_Z,         KC_X,         KC_C,          KC_V,          KC_B,                                            KC_N, KC_M,          KC_COMM,        KC_DOT,         KC_SLSH,         KC_NO,

                                                          LT(3,KC_ESC),    KC_SPC,       LT(2,KC_TAB),        LT(5,KC_ENT), LT(4,KC_BSPC),       LT(6,KC_DEL)
    ),
};
