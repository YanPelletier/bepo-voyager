#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
};

#define DUAL_FUNC_0 LT(12, KC_N)
#define DUAL_FUNC_1 LT(14, KC_C)
#define DUAL_FUNC_2 LT(8, KC_F1)
#define DUAL_FUNC_3 LT(10, KC_Y)
#define DUAL_FUNC_4 LT(5, KC_Y)
#define DUAL_FUNC_5 LT(8, KC_B)
#define DUAL_FUNC_6 LT(14, KC_A)
#define DUAL_FUNC_7 LT(9, KC_Y)
#define DUAL_FUNC_8 LT(8, KC_A)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          TD(DANCE_0),    TD(DANCE_1),    BP_P,           BP_O,           BP_EGRV,                                        BP_DCRC,        TD(DANCE_3),    BP_D,           BP_L,           TD(DANCE_4),    KC_NO,          
    KC_NO,          TD(DANCE_2),    MT(MOD_LALT, BP_U),MT(MOD_LCTL, BP_I),MT(MOD_LSFT, BP_E),MT(MOD_RALT, BP_COMM),                                TD(DANCE_5),    MT(MOD_RSFT, BP_T),MT(MOD_RCTL, BP_S),MT(MOD_LALT, BP_R),MT(MOD_RGUI, BP_N),KC_NO,          
    KC_NO,          LT(2, BP_AGRV), BP_Y,           BP_X,           BP_DOT,         BP_K,                                           BP_APOS,        BP_Q,           BP_G,           BP_H,           LT(2, BP_F),    KC_NO,          
                                                    LT(1, KC_BSPC), LT(3, KC_ENTER),                                MEH_T(KC_DELETE),LT(1, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_0,    BP_LGIL,        BP_RGIL,        BP_LPRN,        BP_RPRN,                                        BP_AT,          BP_PLUS,        BP_MINS,        BP_SLSH,        DUAL_FUNC_4,    KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_1,    BP_2,           BP_3,           DUAL_FUNC_2,    BP_5,                                           BP_6,           DUAL_FUNC_5,    BP_8,           BP_9,           DUAL_FUNC_6,    KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_3,    BP_LESS,        BP_GRTR,        BP_LBRC,        BP_RBRC,                                        RALT(BP_AT),    RALT(BP_PLUS),  RALT(BP_MINS),  RALT(BP_SLSH),  DUAL_FUNC_7,    KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    MT(MOD_LALT, KC_AUDIO_VOL_DOWN),MT(MOD_LCTL, KC_AUDIO_MUTE),MT(MOD_LSFT, KC_AUDIO_VOL_UP),KC_RIGHT_ALT,                                   KC_RIGHT_ALT,   MT(MOD_RSFT, KC_MEDIA_PREV_TRACK),MT(MOD_RCTL, KC_MEDIA_STOP),MT(MOD_LALT, KC_MEDIA_PLAY_PAUSE),MT(MOD_RGUI, KC_MEDIA_NEXT_TRACK),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F11,                                         KC_F12,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    DUAL_FUNC_8,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DM_REC1,        DM_RSTP,        KC_PSCR,        DM_PLY1,        KC_TRANSPARENT,                                 KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_MS_WH_UP,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_RIGHT_ALT,                                   KC_PAGE_UP,     KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_MS_WH_DOWN,  KC_TRANSPARENT, 
    KC_TRANSPARENT, DM_REC2,        DM_RSTP,        KC_TRANSPARENT, DM_PLY2,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_SLASH,    KC_KP_ASTERISK, KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_MINUS,    KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_PLUS,     KC_NO,          KC_NO,          
                                                    KC_BSPC,        KC_ENTER,                                       KC_KP_0,        KC_KP_DOT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { LT(1, KC_BSPC), LT(3, KC_ENTER), COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_BSPC, KC_ENTER, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(4)),
    COMBO(combo1, TO(0)),
};





typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[6];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(BP_B);
        tap_code16(BP_B);
        tap_code16(BP_B);
    }
    if(state->count > 3) {
        tap_code16(BP_B);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(BP_B); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(BP_B); register_code16(BP_B);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(BP_B); break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(BP_B); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(BP_ECUT);
        tap_code16(BP_ECUT);
        tap_code16(BP_ECUT);
    }
    if(state->count > 3) {
        tap_code16(BP_ECUT);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(BP_ECUT); break;
        case DOUBLE_TAP: register_code16(BP_W); break;
        case DOUBLE_SINGLE_TAP: tap_code16(BP_ECUT); register_code16(BP_ECUT);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(BP_ECUT); break;
        case DOUBLE_TAP: unregister_code16(BP_W); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(BP_ECUT); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(BP_A);
        tap_code16(BP_A);
        tap_code16(BP_A);
    }
    if(state->count > 3) {
        tap_code16(BP_A);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(BP_A); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: register_code16(KC_TAB); break;
        case DOUBLE_SINGLE_TAP: tap_code16(BP_A); register_code16(BP_A);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(BP_A); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: unregister_code16(KC_TAB); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(BP_A); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(BP_V);
        tap_code16(BP_V);
        tap_code16(BP_V);
    }
    if(state->count > 3) {
        tap_code16(BP_V);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(BP_V); break;
        case DOUBLE_TAP: register_code16(BP_M); break;
        case DOUBLE_SINGLE_TAP: tap_code16(BP_V); register_code16(BP_V);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(BP_V); break;
        case DOUBLE_TAP: unregister_code16(BP_M); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(BP_V); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(BP_J);
        tap_code16(BP_J);
        tap_code16(BP_J);
    }
    if(state->count > 3) {
        tap_code16(BP_J);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(BP_J); break;
        case DOUBLE_TAP: register_code16(BP_Z); break;
        case DOUBLE_SINGLE_TAP: tap_code16(BP_J); register_code16(BP_J);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(BP_J); break;
        case DOUBLE_TAP: unregister_code16(BP_Z); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(BP_J); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(BP_C);
        tap_code16(BP_C);
        tap_code16(BP_C);
    }
    if(state->count > 3) {
        tap_code16(BP_C);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(BP_C); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_ALT); break;
        case DOUBLE_TAP: register_code16(BP_CCED); break;
        case DOUBLE_SINGLE_TAP: tap_code16(BP_C); register_code16(BP_C);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(BP_C); break;
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_ALT); break;
        case DOUBLE_TAP: unregister_code16(BP_CCED); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(BP_C); break;
    }
    dance_state[5].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(BP_DQOT);
        } else {
          unregister_code16(BP_DQOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(BP_DLR);
        } else {
          unregister_code16(BP_DLR);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(BP_1);
        } else {
          unregister_code16(BP_1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(BP_HASH);
        } else {
          unregister_code16(BP_HASH);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(BP_4);
        } else {
          unregister_code16(BP_4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(BP_MDSH);
        } else {
          unregister_code16(BP_MDSH);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(BP_HASH));
        } else {
          unregister_code16(RALT(BP_HASH));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(BP_ASTR);
        } else {
          unregister_code16(BP_ASTR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(BP_EQL);
        } else {
          unregister_code16(BP_EQL);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(BP_7);
        } else {
          unregister_code16(BP_7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RIGHT_SHIFT);
        } else {
          unregister_code16(KC_RIGHT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(BP_0);
        } else {
          unregister_code16(BP_0);
        }
      } else {
        if (record->event.pressed) {
          register_code16(BP_DEGR);
        } else {
          unregister_code16(BP_DEGR);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RALT(BP_ASTR));
        } else {
          unregister_code16(RALT(BP_ASTR));
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(BP_DEGR));
        } else {
          unregister_code16(RALT(BP_DEGR));
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_BSPC);
        } else {
          unregister_code16(KC_BSPC);
        }
      } else {
        if (record->event.pressed) {
          layer_move(1);
        } else {
          layer_move(1);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
