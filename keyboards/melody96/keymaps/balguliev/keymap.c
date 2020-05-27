#include QMK_KEYBOARD_H

#define CTRL_ESC 		LCTL_T(KC_ESC)
#define TAPPING_TERM 	200

/* Compile this with "make melody96:balguliev" */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Layer 0, default layer
____________________________________________________________________________________________________________________________________________________________________________
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
| ESC*   |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |  F10   |  F11   |  F12   | P SCN  |   INS  |  HOME  |   END  |  P UP  | P DOWN |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |          BACK   |        |        |        |  NUM   |
|  ~`    |   1    |   2    |   3    |   4    |   5    |   6    |   7    |   8    |   9    |   0    |  _ -   | =  +   |          SPACE  |   DEL  |   /    |  *     |  LOCK  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|_________________|________|________|________|________|
|            |        |        |        |        |        |        |        |        |        |        |  [     |   ]    |             |        |        |        |        |
|    TAB     |   Q    |   W    |   E    |   R    |   T    |   Y    |   U    |   I    |   O    |   P    |  {     |   }    |  |   \      |   7    |   8    |   9    |   -    |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|_____________|________|________|________|________|
|              |        |        |        |        |        |        |        |        |        |   ;    |   '    |                    |        |        |        |        |
|   CAPS LOCK  |   A    |   S    |   D    |   F    |   G    |   H    |   J    |   K    |   L    |   :    |   "    |       ENTER        |   4    |   5    |   6    |   +    |
|______________|________|________|________|________|________|________|________|________|________|________|________|____________________|________|________|________|________|
|         |        |        |        |        |        |        |        |        |   ,    |    .   |   /    |                |        |        |        |        |        |
|  SHIFT  |  NUBS  |   Z    |   X    |   C    |   V    |   B    |   N    |   M    |   <    |    >   |   ?    |       SHIFT    |   UP   |   1    |   2    |   3    | ENTER  |
|_________|________|________|________|________|________|________|________|________|________|________|________|________________|________|________|________|________|________|
|          |          |          |                                                        |        |   MO   |   MO   |        |        |        |        |        |        |
| CTRL     |   LGUI   | L ALT    |                      SPACE                             | R ALT  |  _FN   |  _FN   |  LEFT  |  DOWN  | RIGHT  |   0    |   .    | ENTER  |
|__________|__________|__________|________________________________________________________|________|________|________|________|________|________|________|________|________|
*/



	LAYOUT(
    KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_INS,  KC_HOME, KC_END,  KC_PGUP, KC_PGDN,
    KC_GRV,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_BSPC, KC_DEL,  KC_PSLS, KC_PAST, KC_NLCK,
    KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_P7,   KC_P8,   KC_P9,   KC_PMNS,
    CTRL_ESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                    KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
    KC_LSFT,  KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_P1,   KC_P2,   KC_P3,   KC_PENT,
    KC_LCTL,  KC_LGUI, KC_LAPO,                            KC_SPC,                             KC_RAPC, MO(1),   MO(1),   KC_LEFT, KC_DOWN, KC_RGHT, KC_P0,   KC_PDOT, KC_PENT),



  /* Layer 1, function layer
____________________________________________________________________________________________________________________________________________________________________________
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
| SLEEP  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |                 |        |        |        |        |
|        |        |    ™   |    №   |    ¢   |        |        |        |    •   |        |        |        |    ≈   |     DELETE      |        |        |        |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________ ________|________|________|________|________|
|            |  RGB   |        |  RGB   |  HUE   |  HUE   | SATUR. | SATUR. | VALUE  | VALUE  |        |        |        |             |        |        |        |        |
|            | TOGGLE |        |  MODE  |INCREASE| DCRSE  |INCREASE| DCRSE  |INCREASE| DCRSE  |        |        |        |             |        |  VOL + |        |        |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|_____________|________|________|________|________|
|              |        |        |        |        |        |        |        |        |        |        |        |                    |        |        |        |        |
| KEYS LOCK    |        |        |        |        |        |        |        |        |        |        |        |                    | REWIND |  PLAY  |  SKIP  |        |
|______________|________|________|________|________|________|________|________|________|________|________|________|____________________|________|________|________|________|
|         |        |        |        |		  |        |        |        |        |        |        |        |                |        |        |        |        |        |
|         |        |        |  CALC  |        |        |        |        |        |        |        |        |                |        |        |  VOL - |        |  CALC  |
|_________|________|________|________|________|________|________|________|________|________|________|________|________________|________|________|________|________|________|
|          |          |          |                                                        |        |        |        |        |        |        |        |        |        |
|          |          |          |                                                        |        |        |        |        |        |        |        |        |  CALC  |
|__________|__________|__________|________________________________________________________|________|________|________|________|________|________|________|________|________|
BL_TOGG, BL_DEC, BL_INC changes the in-switch LEDs
*/


	LAYOUT(
    KC_SLEP, DYN_MACRO_PLAY1, DYN_MACRO_PLAY2,  _______,    _______,  _______, _______, _______, _______,  _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,
    _______, _______, UC(0x99), UC(0x2116), UC(0xA2), _______, _______, _______, UC(0x95), _______, _______, _______, _______, UC(0x2248), KC_DEL,  _______, _______, _______, _______,
    _______, RGB_TOG, _______,  RGB_MOD,    RGB_HUI,  RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI,  RGB_VAD, _______, _______, _______, _______,             _______, KC_VOLU, _______, _______,
    KC_LOCK, _______, _______,  _______,    _______,  _______, _______, _______, _______,  _______, _______, _______, _______,                   KC_MPRV, KC_MPLY, KC_MNXT, _______,
	_______, _______, _______,  _______,    KC_CALC,  _______, _______, _______, _______,  _______, _______, _______, _______, 		       KC_PGUP, _______, KC_VOLD, _______, KC_CALC,
    _______, _______, KC_LCTL,                                 _______,                             KC_RALT, _______, _______, KC_HOME,    KC_PGDN, KC_END,  _______, KC_MUTE, KC_CALC),
};


/******************** Combos ********************/

enum custom_combos {
    // ALT_ALT_BS,
	DYN_MAC_REC_1,
	DYN_MAC_REC_2,
	NUM,
};

// /* L_ALT + R_ALT -> BSPC */
// const uint16_t PROGMEM alt_combo[] = {KC_LALT, KC_RALT, COMBO_END};

const uint16_t PROGMEM DYN_MAC_REC_1_COMBO[] = {MO(1), KC_RALT, KC_F1, COMBO_END};
const uint16_t PROGMEM DYN_MAC_REC_2_COMBO[] = {MO(1), KC_RALT, KC_F2, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
//         [ALT_ALT_BS] = COMBO(alt_combo, KC_BSPC)
	[DYN_MAC_REC_1] = COMBO(DYN_MAC_REC_1_COMBO, DYN_REC_START1),
	[DYN_MAC_REC_2] = COMBO(DYN_MAC_REC_2_COMBO, DYN_REC_START2),
};


/******************** RGB Flash ********************/


const rgblight_segment_t PROGMEM _yes_layer[] = RGBLIGHT_LAYER_SEGMENTS( {9, 6, HSV_GREEN} );
const rgblight_segment_t PROGMEM _no_layer[]  = RGBLIGHT_LAYER_SEGMENTS( {9, 6, HSV_RED} );

const rgblight_segment_t* const PROGMEM _rgb_layers[] = RGBLIGHT_LAYERS_LIST( _yes_layer, _no_layer );

void keyboard_post_init_user(void) {
    rgblight_layers = _rgb_layers;
}


/******************** Key Behavior ********************/


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
	case DYN_REC_START1:
	case DYN_REC_START2:
		rgblight_blink_layer(0, 500);
		return true;
	default:
		return true;
	}
}

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	return MACRO_NONE;
}
