#include QMK_KEYBOARD_H

 /* keymap layers */
enum _layers {
    _BASE,
    _NUM,
    _FN,
    _QWERTY,
};

// Todo:
// - ( ) Layer for qwerty for games
// - ( ) Layer which is optimized for plover to read?

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT_ortho_4x12( // Standard
      XXXXXXX,  KC_Q,            KC_W,              KC_F,             KC_P,              KC_B,     /*--*/  KC_J,     KC_L,             KC_U,           KC_Y,              KC_SCLN,       XXXXXXX,
      XXXXXXX,  LGUI_T(KC_A),    LALT_T(KC_R),      LSFT_T(KC_S),     LCTL_T(KC_T),      KC_G,     /*--*/  KC_M,     RCTL_T(KC_N),     RSFT_T(KC_E),   RALT_T(KC_I),      RGUI_T(KC_O),  XXXXXXX,
      XXXXXXX,  KC_X,            KC_C,              KC_D,             KC_V,              KC_Z,     /*--*/  KC_K,     KC_H,             KC_COMM,        KC_DOT,            KC_SLSH,       XXXXXXX,
      XXXXXXX,  XXXXXXX,         XXXXXXX,           XXXXXXX,          LT(_NUM, KC_ESC),  KC_BSPC,  /*--*/  KC_SPC,   LT(_FN, KC_ENT),  XXXXXXX,        XXXXXXX,           XXXXXXX,       XXXXXXX
    ),
    [_NUM] = LAYOUT_ortho_4x12( // NUM
      XXXXXXX,  KC_1,            KC_2,              KC_3,             KC_4,              KC_5,     /*--*/  KC_6,     KC_7,             KC_8,           KC_9,              KC_0,          XXXXXXX,
      XXXXXXX,  LGUI_T(KC_TAB),  LALT_T(KC_GRAVE),  LSFT_T(KC_QUOT),  LCTL_T(KC_BSLS),   XXXXXXX,  /*--*/  KC_LEFT,  RCTL_T(KC_DOWN),  RSFT_T(KC_UP),  RALT_T(KC_RIGHT),  KC_RGUI,       XXXXXXX,
      XXXXXXX,  XXXXXXX,         XXXXXXX,           DM_PLY1,          DM_PLY2,           DM_RSTP,  /*--*/  KC_BTN2,  KC_MINUS,         KC_EQUAL,       KC_LCBR,           KC_RCBR,       XXXXXXX,
      XXXXXXX,  XXXXXXX,         XXXXXXX,           XXXXXXX,          MO(_NUM),          KC_BSPC,  /*--*/  KC_SPC,   XXXXXXX,          XXXXXXX,        XXXXXXX,           XXXXXXX,       XXXXXXX
    ),
    [_FN] = LAYOUT_ortho_4x12(  // FN
      XXXXXXX,  KC_F1,           KC_F2,             KC_F3,            KC_F4,             KC_F5,    /*--*/  KC_F6,    KC_F7,            KC_F8,          KC_F9,             KC_F10,        XXXXXXX,
      XXXXXXX,  KC_F11,          KC_F12,            KC_F13,           KC_F13,            KC_F14,   /*--*/  KC_F15,   KC_F16,           KC_F17,         KC_F18,            KC_F19,        XXXXXXX,
      XXXXXXX,  KC_F20,          KC_F21,            KC_F22,           KC_F23,            KC_F24,   /*--*/  KC_MS_L,  KC_MS_D,          KC_MS_U,        KC_MS_R,           KC_BTN1,       XXXXXXX,
      XXXXXXX,  XXXXXXX,         XXXXXXX,           XXXXXXX,          TT(_QWERTY),       KC_DEL,   /*--*/  KC_SPC,   MO(_FN),          XXXXXXX,        XXXXXXX,           XXXXXXX,       XXXXXXX
    ),
};
