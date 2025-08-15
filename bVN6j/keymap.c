#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_0_236_141,
  HSV_90_248_81,
  HSV_163_245_128,
  HSV_31_218_204,
};



#define DUAL_FUNC_0 LT(9, KC_3)
#define DUAL_FUNC_1 LT(10, KC_I)
#define DUAL_FUNC_2 LT(10, KC_R)
#define DUAL_FUNC_3 LT(14, KC_N)
#define DUAL_FUNC_4 LT(11, KC_F12)
#define DUAL_FUNC_5 LT(11, KC_P)
#define DUAL_FUNC_6 LT(15, KC_R)
#define DUAL_FUNC_7 LT(4, KC_F16)
#define DUAL_FUNC_8 LT(7, KC_F17)
#define DUAL_FUNC_9 LT(5, KC_F9)
#define DUAL_FUNC_10 LT(2, KC_F16)
#define DUAL_FUNC_11 LT(2, KC_F17)
#define DUAL_FUNC_12 LT(3, KC_K)
#define DUAL_FUNC_13 LT(3, KC_P)
#define DUAL_FUNC_14 LT(2, KC_T)
#define DUAL_FUNC_15 LT(5, KC_E)
#define DUAL_FUNC_16 LT(10, KC_T)
#define DUAL_FUNC_17 LT(6, KC_F8)
#define DUAL_FUNC_18 LT(4, KC_F11)
#define DUAL_FUNC_19 LT(6, KC_F10)
#define DUAL_FUNC_20 LT(9, KC_7)
#define DUAL_FUNC_21 LT(11, KC_L)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      BP_DQOT,        BP_LGIL,        BP_RGIL,        BP_LPRN,        BP_RPRN,                                        BP_AT,          BP_PLUS,        BP_MINS,        BP_SLSH,        BP_ASTR,        BP_EQL,         
    KC_TAB,         BP_B,           BP_ECUT,        BP_P,           BP_O,           BP_EGRV,                                        BP_DCRC,        DUAL_FUNC_2,    DUAL_FUNC_3,    BP_L,           BP_J,           DUAL_FUNC_4,    
    DUAL_FUNC_0,    MT(MOD_LGUI, BP_A),MT(MOD_LALT, BP_U),MT(MOD_LCTL, BP_I),MT(MOD_LSFT, BP_E),BP_COMM,                                        DUAL_FUNC_5,    MT(MOD_RSFT, BP_T),MT(MOD_RCTL, BP_S),MT(MOD_LALT, BP_R),MT(MOD_RGUI, BP_N),BP_M,           
    BP_DLR,         LT(2, BP_AGRV), BP_Y,           DUAL_FUNC_1,    BP_DOT,         BP_K,                                           BP_APOS,        BP_Q,           BP_G,           BP_H,           LT(2, BP_F),    BP_W,           
                                                    KC_BSPC,        LT(1, KC_ENTER),                                OSM(MOD_RALT),  MEH_T(KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PSCR,        KC_TRANSPARENT, KC_TRANSPARENT,                                 LCTL(KC_LEFT),  LALT(KC_LEFT),  KC_UP,          LALT(KC_RIGHT), LCTL(KC_RIGHT), KC_PAGE_UP,     
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT,                                 KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,         KC_PGDN,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F12,         
    KC_TRANSPARENT, KC_LEFT_GUI,    MT(MOD_LALT, KC_AUDIO_VOL_DOWN),MT(MOD_LCTL, KC_AUDIO_MUTE),MT(MOD_LSFT, KC_AUDIO_VOL_UP),KC_TRANSPARENT,                                 KC_TRANSPARENT, MT(MOD_RSFT, KC_MEDIA_PREV_TRACK),MT(MOD_RCTL, KC_MEDIA_STOP),MT(MOD_LALT, KC_MEDIA_PLAY_PAUSE),MT(MOD_RGUI, KC_MEDIA_NEXT_TRACK),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_KP_SLASH,    KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_ASTERISK, KC_NO,          KC_NO,          
    KC_NO,          KC_F16,         KC_NO,          KC_NO,          KC_F17,         KC_F18,                                         KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_MINUS,    KC_NO,          KC_NO,          
    KC_NO,          KC_F19,         KC_NO,          KC_NO,          KC_F20,         KC_NO,                                          KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_PLUS,     KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_KP_0,        KC_KP_DOT
  ),
  [4] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        KC_NO,                                          KC_NO,          RGB_VAD,        RGB_VAI,        RGB_SPD,        RGB_SPI,        KC_NO,          
    KC_NO,          HSV_0_236_141,  HSV_90_248_81,  HSV_163_245_128,HSV_31_218_204, KC_NO,                                          KC_NO,          RGB_HUD,        RGB_HUI,        RGB_SAD,        RGB_SAD,        KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [5] = LAYOUT_voyager(
    KC_ESCAPE,      DUAL_FUNC_6,    DUAL_FUNC_7,    DUAL_FUNC_8,    DUAL_FUNC_9,    DUAL_FUNC_10,                                   DUAL_FUNC_15,   DUAL_FUNC_16,   DUAL_FUNC_17,   DUAL_FUNC_18,   DUAL_FUNC_19,   DUAL_FUNC_20,   
    KC_TAB,         KC_B,           FRCA_16,        KC_P,           KC_O,           FRCA_13,                                        FRCA_15,        KC_V,           KC_D,           KC_L,           KC_J,           DUAL_FUNC_21,   
    FRCA_12,        MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_U),MT(MOD_LCTL, KC_I),MT(MOD_LSFT, KC_E),KC_COMMA,                                       KC_C,           MT(MOD_RSFT, KC_T),MT(MOD_RCTL, KC_S),MT(MOD_RALT, KC_R),MT(MOD_RGUI, KC_N),KC_M,           
    DUAL_FUNC_11,   DUAL_FUNC_12,   DUAL_FUNC_13,   DUAL_FUNC_14,   KC_DOT,         KC_K,                                           KC_QUOTE,       KC_Q,           KC_G,           KC_H,           KC_F,           KC_W,           
                                                    KC_BSPC,        KC_ENTER,                                       OSM(MOD_RALT),  MEH_T(KC_SPACE)
  ),
  [6] = LAYOUT_voyager(
    KC_ESCAPE,      RSFT(BP_1),     RSFT(BP_2),     RSFT(BP_3),     RSFT(BP_4),     RSFT(BP_5),                                     RSFT(BP_6),     RSFT(BP_7),     RSFT(BP_8),     RSFT(BP_9),     RSFT(BP_0),     KC_AUDIO_VOL_UP,
    KC_TAB,         BP_Q,           BP_W,           BP_E,           BP_R,           BP_T,                                           BP_Y,           BP_U,           BP_I,           BP_O,           BP_P,           KC_AUDIO_MUTE,  
    KC_LEFT_ALT,    BP_A,           BP_S,           BP_D,           BP_F,           BP_G,                                           BP_H,           BP_J,           BP_K,           BP_L,           KC_NO,          KC_AUDIO_VOL_DOWN,
    KC_LEFT_CTRL,   BP_Z,           BP_X,           BP_C,           BP_V,           BP_B,                                           BP_N,           BP_M,           KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_SPACE,       KC_LEFT_SHIFT,                                  KC_ENTER,       KC_NO
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'R', 'R'
);

const uint16_t PROGMEM combo0[] = { BP_EQL, BP_ASTR, BP_SLSH, COMBO_END};
const uint16_t PROGMEM combo1[] = { DUAL_FUNC_18, DUAL_FUNC_19, DUAL_FUNC_20, COMBO_END};
const uint16_t PROGMEM combo2[] = { BP_B, BP_ECUT, BP_P, BP_O, COMBO_END};
const uint16_t PROGMEM combo3[] = { BP_W, BP_Q, BP_E, BP_R, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(5)),
    COMBO(combo1, TO(0)),
    COMBO(combo2, TO(6)),
    COMBO(combo3, TO(0)),
};



extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {38,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,236,141}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,236,141}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {38,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,236,141}, {0,0,255}, {38,255,255}, {0,0,255} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {163,246,143}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {44,233,204}, {44,233,204}, {86,238,143}, {44,233,204}, {44,233,204}, {0,0,140}, {18,233,186}, {86,238,143}, {86,238,143}, {86,238,143}, {18,233,186}, {0,0,140}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {218,215,148}, {218,215,148}, {218,215,148}, {218,215,148}, {218,215,148}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,231,143}, {255,243,150}, {174,231,143}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {218,215,148}, {218,215,148}, {218,215,148}, {218,215,148}, {218,215,148}, {218,215,148}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {218,215,148}, {0,0,0}, {46,201,237}, {255,243,150}, {89,245,103}, {46,201,237}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {163,246,143}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,132}, {0,0,0}, {0,0,0}, {83,252,85}, {163,246,143}, {0,0,0}, {0,255,132}, {0,0,0}, {0,0,0}, {83,252,85}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {38,180,246}, {0,0,0}, {0,0,0}, {0,0,76}, {0,0,76}, {0,0,76}, {199,174,219}, {0,0,0}, {0,0,0}, {0,0,76}, {0,0,255}, {0,0,76}, {19,221,85}, {0,0,0}, {0,0,0}, {0,0,76}, {0,0,76}, {0,0,76}, {19,251,197}, {0,0,0}, {0,0,0}, {0,0,76}, {0,0,255} },

    [4] = { {163,246,143}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,218,204}, {31,218,204}, {31,218,204}, {31,218,204}, {0,0,0}, {0,0,0}, {0,236,141}, {90,248,81}, {163,245,128}, {31,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,218,204}, {31,218,204}, {31,218,204}, {31,218,204}, {0,0,0}, {0,0,0}, {31,218,204}, {31,218,204}, {31,218,204}, {31,218,204}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255} },

    [6] = { {0,0,111}, {0,0,111}, {0,0,111}, {0,0,111}, {0,0,111}, {0,0,111}, {0,0,111}, {0,0,111}, {83,252,85}, {0,0,111}, {0,0,111}, {0,0,111}, {38,255,255}, {83,252,85}, {83,252,85}, {83,252,85}, {0,0,111}, {0,0,111}, {38,255,255}, {0,0,111}, {0,0,111}, {0,0,111}, {0,0,111}, {0,0,111}, {163,245,141}, {38,255,255}, {0,0,111}, {0,0,111}, {0,0,111}, {0,0,111}, {0,0,111}, {0,255,132}, {0,0,111}, {0,0,111}, {0,0,111}, {0,0,111}, {0,0,111}, {0,255,132}, {0,0,111}, {0,0,111}, {0,0,111}, {0,0,111}, {0,0,111}, {0,255,132}, {0,0,111}, {0,0,111}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,111}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(BP_CCED);
        } else {
          unregister_code16(BP_CCED);
        }
      } else {
        if (record->event.pressed) {
          layer_move(3);
        } else {
          layer_move(3);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(BP_X);
        } else {
          unregister_code16(BP_X);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_DELETE));
        } else {
          unregister_code16(LSFT(KC_DELETE));
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(BP_V);
        } else {
          unregister_code16(BP_V);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_INSERT));
        } else {
          unregister_code16(LSFT(KC_INSERT));
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(BP_D);
        } else {
          unregister_code16(BP_D);
        }
      } else {
        if (record->event.pressed) {
          layer_move(4);
        } else {
          layer_move(4);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(BP_Z);
        } else {
          unregister_code16(BP_Z);
        }
      } else {
        if (record->event.pressed) {
          register_code16(BP_PERC);
        } else {
          unregister_code16(BP_PERC);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(BP_C);
        } else {
          unregister_code16(BP_C);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_INSERT));
        } else {
          unregister_code16(LCTL(KC_INSERT));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_1);
        } else {
          unregister_code16(KC_1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_DQUO);
        } else {
          unregister_code16(KC_DQUO);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_2);
        } else {
          unregister_code16(KC_2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(BP_LGIL);
        } else {
          unregister_code16(BP_LGIL);
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_3);
        } else {
          unregister_code16(KC_3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(BP_RGIL);
        } else {
          unregister_code16(BP_RGIL);
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_4);
        } else {
          unregister_code16(KC_4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LPRN);
        } else {
          unregister_code16(KC_LPRN);
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_5);
        } else {
          unregister_code16(KC_5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RPRN);
        } else {
          unregister_code16(KC_RPRN);
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DLR);
        } else {
          unregister_code16(KC_DLR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_HASH);
        } else {
          unregister_code16(KC_HASH);
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(BP_AGRV);
        } else {
          unregister_code16(BP_AGRV);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_BSLS);
        } else {
          unregister_code16(KC_BSLS);
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_Y);
        } else {
          unregister_code16(KC_Y);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LCBR);
        } else {
          unregister_code16(KC_LCBR);
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_X);
        } else {
          unregister_code16(KC_X);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RCBR);
        } else {
          unregister_code16(KC_RCBR);
        }  
      }  
      return false;
    case DUAL_FUNC_15:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_6);
        } else {
          unregister_code16(KC_6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_AT);
        } else {
          unregister_code16(KC_AT);
        }  
      }  
      return false;
    case DUAL_FUNC_16:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_7);
        } else {
          unregister_code16(KC_7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_PLUS);
        } else {
          unregister_code16(KC_PLUS);
        }  
      }  
      return false;
    case DUAL_FUNC_17:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_8);
        } else {
          unregister_code16(KC_8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MINUS);
        } else {
          unregister_code16(KC_MINUS);
        }  
      }  
      return false;
    case DUAL_FUNC_18:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_9);
        } else {
          unregister_code16(KC_9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_SLASH);
        } else {
          unregister_code16(KC_SLASH);
        }  
      }  
      return false;
    case DUAL_FUNC_19:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_0);
        } else {
          unregister_code16(KC_0);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_ASTR);
        } else {
          unregister_code16(KC_ASTR);
        }  
      }  
      return false;
    case DUAL_FUNC_20:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_EQUAL);
        } else {
          unregister_code16(KC_EQUAL);
        }
      } else {
        if (record->event.pressed) {
          register_code16(BP_DEGR);
        } else {
          unregister_code16(BP_DEGR);
        }  
      }  
      return false;
    case DUAL_FUNC_21:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_Z);
        } else {
          unregister_code16(KC_Z);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_PERC);
        } else {
          unregister_code16(KC_PERC);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_236_141:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,236,141);
      }
      return false;
    case HSV_90_248_81:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(90,248,81);
      }
      return false;
    case HSV_163_245_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(163,245,128);
      }
      return false;
    case HSV_31_218_204:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(31,218,204);
      }
      return false;
  }
  return true;
}


