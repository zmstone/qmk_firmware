#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

#define LG_Z LGUI(KC_Z)
#define LG_Y LGUI(KC_Y)
#define CTL_B LCTL(KC_B) // tmux

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        KC_ESC  , KC_1 , KC_2   , KC_3    , KC_4   , KC_5   ,                          KC_6 , KC_7 , KC_8    , KC_9   , KC_0    , KC_MINS  ,
        KC_QUOT , KC_Q , KC_W   , KC_E    , KC_R   , KC_T   ,                          KC_Y , KC_U , KC_I    , KC_O   , KC_P    , KC_EQL   ,
        KC_TAB  , KC_A , KC_S   , KC_D    , KC_F   , KC_G   ,                          KC_H , KC_J , KC_K    , KC_L   , KC_SCLN , KC_ENTER ,
        KC_GRV  , KC_Z , KC_X   , KC_C    , KC_V   , KC_B   ,                          KC_N , KC_M , KC_COMM , KC_DOT , KC_SLSH , KC_BSLS  ,
                         KC_LGUI, CTL_B   , KC_SPC ,                                    KC_BSPC , KC_RALT, KC_RGUI,
                                                   KC_LSFT,                          KC_RCTL,
                                                             TT(_RAISE),  TT(_LOWER)
    ),
    [_LOWER] = LAYOUT_5x6(
        KC_ESC  , KC_F1  , KC_F2  , KC_F3  , KC_F4,   KC_F5  ,                         KC_F6 , KC_F7   , KC_F8   , KC_F9   , KC_F10   , KC_F11 ,
        KC_DEL  , KC_EXLM, KC_AT  , KC_LBRC, KC_RBRC, KC_PIPE,                         KC_1  , KC_2    , KC_UP   , KC_4    , KC_5     , KC_F12 ,
        KC_QUES , KC_HASH, KC_DLR , KC_LPRN, KC_RPRN, KC_MINS,                         KC_3  , KC_LEFT , KC_DOWN , KC_RGHT , KC_SLSH  , KC_RGUI,
        KC_TILD , KC_PERC, KC_CIRC, KC_LCBR, KC_RCBR, KC_UNDS,                         KC_6  , KC_7    , KC_8    , KC_9    , KC_0     , _______,
                           KC_DOT , KC_SLSH,     LG_Z,                                      KC_MINS     , KC_0    , KC_0,
                                                        LG_Y,                       KC_DOT,
                                                             _______,       _______
    ),
    [_RAISE] = LAYOUT_5x6(
        _______, _______, _______, _______, _______, _______,                          _______, _______, _______, _______, _______, _______,
        _______, _______, _______, KC_WH_U, _______, _______,                          _______, _______, KC_MS_U, _______, _______, _______,
        _______, _______, KC_WH_L, KC_WH_D, KC_WH_R, _______,                          _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, KC_MPLY,
        _______, _______, KC_DOT , KC_SLSH, _______, _______,                          KC_VOLD, KC_VOLU, KC_MPRV, KC_MNXT, _______, _______,
                          _______, _______,   _______,                                       KC_BTN2, KC_BTN3, KC_MUTE,
                                                      _______,                      KC_BTN1,
                                                             _______,        _______
    )
};

