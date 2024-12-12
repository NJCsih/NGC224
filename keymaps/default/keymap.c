#include QMK_KEYBOARD_H

 /* keymap layers */
enum _layers {
    _BASE,
    _SHIFT,
    _NUM,
    _SHIFT_NUM,
    _FN,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT_ortho_4x12( //standard; not shift
      KC_TAB,                   KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,     /*--*/  KC_J,       KC_L,       KC_U,       KC_Y,       KC_SCLN,    KC_QUOT,
      KC_ESC,                   KC_A,       KC_R,       KC_S,       KC_T,       KC_G,     /*--*/  KC_M,       KC_N,       KC_E,       KC_I,       KC_O,       KC_ENT,
      LM(_SHIFT, MOD_LSFT),     KC_X,       KC_C,       KC_D,       KC_V,       KC_Z,     /*--*/  KC_K,       KC_H,       KC_COMM,    KC_DOT,     KC_SLSH,    LM(_SHIFT, MOD_RSFT),
      KC_LCTL,                  XXXXXXX,    KC_LWIN,    KC_LALT,    MO(_NUM),   KC_BSPC,  /*--*/  KC_SPC,     MO(_FN),    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX
    ),
    [_SHIFT] = LAYOUT_ortho_4x12( //standard; shifted
      KC_TAB,                   KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,     /*--*/  KC_J,       KC_L,       KC_U,       KC_Y,       KC_SCLN,    KC_QUOT,
      KC_ESC,                   KC_A,       KC_R,       KC_S,       KC_T,       KC_G,     /*--*/  KC_M,       KC_N,       KC_E,       KC_I,       KC_O,       KC_ENT,
      LM(_SHIFT, MOD_LSFT),     KC_X,       KC_C,       KC_D,       KC_V,       KC_Z,     /*--*/  KC_K,       KC_H,       KC_COMMA,   KC_DOT,     KC_SLSH,    LM(_SHIFT, MOD_RSFT),
      KC_LCTL,                  XXXXXXX,    KC_LWIN,    KC_LALT,    MO(_NUM),   KC_BSPC,  /*--*/  KC_SPC,     MO(_FN),    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX
    ),
    [_NUM] = LAYOUT_ortho_4x12( //NUM; not shifted
      KC_GRAVE,                 KC_1,       KC_2,       KC_3,       KC_4,       KC_5,     /*--*/  KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_BSLS,
      KC_ESC,                   XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,  /*--*/  KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   S(KC_COMM), KC_ENT,
      LM(_SHIFT_NUM, MOD_LSFT), XXXXXXX,    XXXXXXX,    DM_PLY1,    DM_PLY1,    DM_RSTP,  /*--*/  XXXXXXX,    KC_MINUS,   KC_EQUAL,   KC_LCBR,    KC_RCBR,    LM(_SHIFT_NUM, MOD_RSFT),
      KC_LCTL,                  XXXXXXX,    KC_LWIN,    KC_LALT,    MO(_NUM),   KC_BSPC,  /*--*/  KC_SPC,     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX
    ),
    [_SHIFT_NUM] = LAYOUT_ortho_4x12( //num; shifted
      KC_GRAVE,                 KC_1,       KC_2,       KC_3,       KC_4,       KC_5,     /*--*/  KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_BSLS,
      KC_ESC,                   XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,  /*--*/  KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   S(KC_DOT),  KC_ENT,
      LM(_SHIFT_NUM, MOD_LSFT), KC_PSCR,    XXXXXXX,    DM_REC1,    DM_REC2,    DM_RSTP,  /*--*/  XXXXXXX,    KC_MINUS,   KC_EQUAL,   KC_LCBR,    KC_RCBR,    LM(_SHIFT_NUM, MOD_RSFT),
      KC_LCTL,                  XXXXXXX,    KC_LWIN,    KC_LALT,    MO(_NUM),   KC_BSPC,  /*--*/  KC_SPC,     XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_DOWN,    XXXXXXX
    ),
    [_FN] = LAYOUT_ortho_4x12( //FN; shifted and unshifted
      KC_TAB,                   KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,    /*--*/  KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     XXXXXXX,
      KC_ESC,                   KC_F11,     KC_F12,     KC_F13,     KC_F13,     KC_F14,   /*--*/  KC_F15,     KC_F16,     KC_F17,     KC_F18,     KC_F19,     KC_ENT,
      XXXXXXX,                  KC_F20,     KC_F21,     KC_F22,     KC_F23,     KC_F24,   /*--*/  KC_MS_L,    KC_MS_U,    KC_MS_D,    KC_MS_R,    KC_BTN1,    KC_BTN2,
      KC_LCTL,                  XXXXXXX,    KC_LWIN,    KC_LALT,    XXXXXXX,    KC_DEL,   /*--*/  KC_SPC,     MO(_FN),    XXXXXXX,    KC_VOLU,    KC_VOLD,    KC_KB_MUTE
    ),
};
