#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_3(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), KC_SCLN, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LGUI, KC_TAB, KC_SPC, KC_ENT, MO(1), MO(2)),
	[1] = LAYOUT_split_3x5_3(KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_P1, KC_P2, KC_P3, KC_P4, KC_P5, KC_P6, KC_P7, KC_P8, KC_P9, KC_P0, KC_GRV, KC_BSLS, KC_TILD, KC_UNDS, KC_QUOT, KC_PEQL, KC_PAST, KC_PSLS, KC_PPLS, KC_PMNS, KC_ESC, KC_DEL, KC_BSPC, KC_NO, KC_TRNS, KC_NO),
	[2] = LAYOUT_split_3x5_3(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_MPLY, KC_MRWD, KC_PGDN, KC_PGUP, KC_MFFD, KC_CUT, KC_COPY, KC_PSTE, KC_PIPE, KC_BSLS, KC_VOLU, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_VOLD, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_ESC, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





