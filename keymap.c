#include QMK_KEYBOARD_H

enum layer_names {
    _DVORAK,
    _LOWER,
    _RAISE,
};

enum planck_keycodes {
  LOWER = SAFE_RANGE,
  RAISE
};

// Defines for task manager and such
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))

// Keyboard Shortcuts
#define COPY LCMD(KC_C)
#define PASTE LCMD(KC_V)
#define CUT LCMD(KC_X)
#define SLCTALL LCMD(KC_A)
#define UNDO LCMD(KC_Z)
#define REDO LCMD(LSFT(KC_Z))
#define CMDTAB LCMD(KC_TAB)
#define ZOOMIN LCMD(LSFT(KC_EQL))
#define ZOOMOUT LCMD(LSFT(KC_MINS))
#define SAVE LCMD(KC_S)
#define SCRSHOT LCMD(LSFT(KC_4))
#define INSP LCMD(LSFT(KC_C))


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_DVORAK] = LAYOUT_ortho_4x12(
  KC_GRV, KC_QUOT,	KC_COMM, KC_DOT,  KC_P,  					 		KC_Y,  					 				KC_F,   			    KC_G,  							KC_C,    KC_R,    KC_L,    RALT_T(KC_SLSH),
  LCTL_T(KC_TAB), KC_A,   	KC_O,    KC_E,    KC_U,  					 		KC_I,  					 				KC_D,   	    KC_H,  							KC_T,    KC_N,    KC_S,    KC_ENT,
  KC_LSFT,        KC_SCLN,  KC_Q,    KC_J,    KC_K,  					 		KC_X,  					 				KC_B,   		KC_M,  							KC_W,    KC_V,  	KC_Z, 	 MT(MOD_LSFT, KC_BSLS),
  _______,        _______, 	_______, KC_LALT, KC_LCMD,  _LOWER,			LT(_RAISE, KC_SPC),LGUI_T(KC_ESC),	KC_RALT, KC_RALT, _______,  _______
),

[_LOWER] = LAYOUT_ortho_4x12(
  LALT_T(KC_ESC), KC_BSPC, ZOOMOUT,  ZOOMIN,	SCRSHOT,  INSP, 		_______, _______, KC_LCBR, KC_RCBR, KC_PLUS, KC_UNDS,
  LCTL_T(KC_F3), SLCTALL,  SAVE,	    COPY, 		PASTE,  KC_SPC, 		KC_CIRC, KC_AMPR, KC_LPRN, KC_RPRN, KC_EQL , KC_MINS,
  REDO,           UNDO,    KC_LEFT,	  KC_DOWN, 	KC_UP, 	 CUT,  				_______, KC_PIPE, KC_LBRC, KC_RBRC, KC_ASTR, _______,
  _______,        KC_VOLD, KC_VOLU,   _______,  KC_SPC, _______, 		_______, _______, _______, _______, _______, _______
),

[_RAISE] = LAYOUT_ortho_4x12(
  KC_TILDE, KC_DQUO, KC_LABK, KC_RABK,		_______,		_______,    	_______,   KC_7  , 	KC_8	,  KC_9  ,    _______   , _______,
  LCTL_T(KC_MINS), KC_EXLM, KC_AT,	 KC_HASH,		KC_DLR,  		KC_PERC,    		_______,  KC_4   , 	KC_5	,  KC_6  ,	  _______, LCTL_T(KC_0),
  KC_UNDS,         KC_COLON,    KC_LEFT, KC_DOWN,   KC_UP, 			KC_RIGHT,  		KC_0,  KC_1   , 	KC_2	,  KC_3	 , 		_______, _______,
  _______,        KC_VOLD, KC_VOLU, _______, 	_______, 		_______, 			_______, _______ , 	KC_0  ,  _______, 	_______,_______
),
};
