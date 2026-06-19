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
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
};

#define DUAL_FUNC_0 LT(4, KC_9)
#define DUAL_FUNC_1 LT(3, KC_0)
#define DUAL_FUNC_2 LT(11, KC_Q)
#define DUAL_FUNC_3 LT(13, KC_F2)
#define DUAL_FUNC_4 LT(15, KC_F13)
#define DUAL_FUNC_5 LT(12, KC_F2)
#define DUAL_FUNC_6 LT(10, KC_7)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_NO,          KC_NO,          TD(DANCE_0),    KC_NO,          KC_NO,          TD(DANCE_1),                                    TD(DANCE_2),    TD(DANCE_3),    KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TAB,         BP_B,           BP_ECUT,        BP_P,           BP_O,           BP_EGRV,                                        BP_DCRC,        DUAL_FUNC_1,    BP_D,           BP_L,           BP_J,           DUAL_FUNC_2,    
    BP_CCED,        MT(MOD_LGUI, BP_A),MT(MOD_LALT, BP_U),MT(MOD_LCTL, BP_I),MT(MOD_LSFT, BP_E),BP_COMM,                                        DUAL_FUNC_3,    MT(MOD_RSFT, BP_T),MT(MOD_RCTL, BP_S),MT(MOD_LALT, BP_R),MT(MOD_RGUI, BP_N),BP_M,           
    LT(4, KC_ESCAPE),LT(3, BP_AGRV), BP_Y,           DUAL_FUNC_0,    MEH_T(BP_DOT),  BP_K,                                           BP_APOS,        MEH_T(BP_Q),    BP_G,           BP_H,           LT(3, BP_F),    LT(7, BP_W),    
                                                    MT(MOD_RALT, KC_BSPC),LT(1, KC_ENTER),                                LT(1, KC_DELETE),MT(MOD_RALT, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    BP_DLR,         BP_DQOT,        BP_LGIL,        BP_RGIL,        BP_LPRN,        BP_RPRN,                                        BP_AT,          BP_PLUS,        BP_MINS,        BP_SLSH,        BP_ASTR,        BP_EQL,         
    BP_HASH,        BP_1,           BP_2,           BP_3,           DUAL_FUNC_4,    BP_5,                                           BP_6,           DUAL_FUNC_5,    BP_8,           BP_9,           BP_0,           BP_DEGR,        
    BP_NDSH_MAC,    BP_MDSH,        BP_LESS,        BP_GRTR,        BP_LBRC,        BP_RBRC,                                        BP_CIRC,        RALT(BP_PLUS),  RALT(BP_MINS),  RALT(BP_SLSH),  RALT(BP_ASTR),  RALT(BP_EQL),   
                                                    BP_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO
  ),
  [2] = LAYOUT_voyager(
    KC_ESCAPE,      BP_DQOT,        BP_LGIL,        BP_RGIL,        BP_LPRN,        TD(DANCE_4),                                    TD(DANCE_5),    TD(DANCE_6),    BP_MINS,        BP_SLSH,        TD(DANCE_7),    BP_EQL,         
    KC_TAB,         BP_B,           BP_ECUT,        BP_P,           BP_O,           BP_EGRV,                                        BP_DCRC,        DUAL_FUNC_1,    BP_D,           BP_L,           BP_J,           DUAL_FUNC_2,    
    DUAL_FUNC_6,    MT(MOD_LGUI, BP_A),MT(MOD_LALT, BP_U),MT(MOD_LCTL, BP_I),MT(MOD_LSFT, BP_E),BP_COMM,                                        DUAL_FUNC_3,    MT(MOD_RSFT, BP_T),MT(MOD_RCTL, BP_S),MT(MOD_LALT, BP_R),MT(MOD_RGUI, BP_N),BP_M,           
    LT(7, BP_DLR),  LT(3, BP_AGRV), BP_Y,           DUAL_FUNC_0,    BP_DOT,         BP_K,                                           BP_APOS,        BP_Q,           BP_G,           BP_H,           LT(3, BP_F),    LT(7, BP_W),    
                                                    KC_BSPC,        LT(4, KC_ENTER),                                OSM(MOD_RALT),  MEH_T(KC_SPACE)
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_NO,          KC_LEFT_GUI,    MT(MOD_LALT, KC_AUDIO_VOL_DOWN),MT(MOD_LCTL, KC_AUDIO_MUTE),MT(MOD_LSFT, KC_AUDIO_VOL_UP),KC_NO,                                          KC_NO,          MT(MOD_RSFT, KC_MEDIA_PREV_TRACK),MT(MOD_RCTL, KC_MEDIA_STOP),MT(MOD_LALT, KC_MEDIA_PLAY_PAUSE),MT(MOD_RGUI, KC_MEDIA_NEXT_TRACK),KC_F12,         
    KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          
                                                    KC_PSCR,        KC_NO,                                          KC_NO,          KC_NO
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LCTL(KC_LEFT),  LALT(KC_LEFT),  KC_UP,          LALT(KC_RIGHT), LCTL(KC_RIGHT), KC_PAGE_UP,     
    KC_NO,          KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,         KC_PGDN,        
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_PSCR,        KC_TRANSPARENT,                                 KC_NO,          KC_NO
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          TD(DANCE_8),    KC_NO,          KC_NO,          KC_NO,                                          TD(DANCE_9),    TD(DANCE_10),   KC_NO,          KC_KP_SLASH,    TD(DANCE_11),   KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_ASTERISK, KC_NO,          KC_NO,          
    KC_NO,          DM_REC1,        KC_NO,          KC_NO,          DM_PLY1,        DM_RSTP,                                        KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_MINUS,    KC_NO,          KC_NO,          
    KC_NO,          DM_REC2,        KC_NO,          KC_NO,          DM_PLY2,        KC_NO,                                          KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_PLUS,     KC_NO,          KC_NO,          
                                                    KC_NO,          TO(0),                                          KC_KP_0,        KC_KP_DOT
  ),
  [6] = LAYOUT_voyager(
    KC_ESCAPE,      BP_DQOT,        BP_LGIL,        BP_RGIL,        BP_LPRN,        BP_RPRN,                                        BP_AT,          BP_PLUS,        BP_MINS,        BP_SLSH,        BP_ASTR,        BP_EQL,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, BP_V,           BP_D,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_ALT,    BP_A,           BP_U,           BP_I,           BP_E,           KC_TRANSPARENT,                                 BP_C,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_CTRL,   BP_AGRV,        KC_TRANSPARENT, BP_X,           KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, BP_G,           BP_H,           BP_F,           BP_W,           
                                                    KC_SPACE,       KC_LEFT_SHIFT,                                  KC_ENTER,       KC_BSPC
  ),
  [7] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_MS_UP,       KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_BTN2,     KC_MS_BTN3,     KC_MS_BTN1,     KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_MS_WH_UP,    KC_NO,                                          KC_NO,          KC_NO
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { BP_G, BP_H, BP_F, BP_W, COMBO_END};
const uint16_t PROGMEM combo1[] = { MT(MOD_RALT, KC_BSPC), MT(MOD_RALT, KC_SPACE), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(0)),
    COMBO(combo1, LALT(LGUI(LCTL(LSFT(KC_F24))))),
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
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {43,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {172,255,255}, {0,255,255}, {86,255,255}, {172,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {86,255,255}, {43,255,255}, {43,255,255}, {172,255,255}, {0,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {86,255,255}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,136}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,136} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
      case 7:
        set_layer_color(7);
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

static tap dance_state[12];

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


void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case DOUBLE_TAP: layer_move(2); break;
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
    }
    dance_state[0].step = 0;
}
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case DOUBLE_TAP: layer_move(5); break;
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
    }
    dance_state[1].step = 0;
}
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case DOUBLE_TAP: layer_move(6); break;
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
    }
    dance_state[2].step = 0;
}
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case DOUBLE_TAP: layer_move(7); break;
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(BP_RPRN);
        tap_code16(BP_RPRN);
        tap_code16(BP_RPRN);
    }
    if(state->count > 3) {
        tap_code16(BP_RPRN);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(BP_RPRN); break;
        case DOUBLE_TAP: layer_move(5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(BP_RPRN); register_code16(BP_RPRN);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(BP_RPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(BP_RPRN); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(BP_AT);
        tap_code16(BP_AT);
        tap_code16(BP_AT);
    }
    if(state->count > 3) {
        tap_code16(BP_AT);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(BP_AT); break;
        case DOUBLE_TAP: layer_move(6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(BP_AT); register_code16(BP_AT);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(BP_AT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(BP_AT); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(BP_PLUS);
        tap_code16(BP_PLUS);
        tap_code16(BP_PLUS);
    }
    if(state->count > 3) {
        tap_code16(BP_PLUS);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(BP_PLUS); break;
        case DOUBLE_TAP: layer_move(7); break;
        case DOUBLE_SINGLE_TAP: tap_code16(BP_PLUS); register_code16(BP_PLUS);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(BP_PLUS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(BP_PLUS); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(BP_ASTR);
        tap_code16(BP_ASTR);
        tap_code16(BP_ASTR);
    }
    if(state->count > 3) {
        tap_code16(BP_ASTR);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(BP_ASTR); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(BP_ASTR); register_code16(BP_ASTR);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(BP_ASTR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(BP_ASTR); break;
    }
    dance_state[7].step = 0;
}
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case DOUBLE_TAP: layer_move(2); break;
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
    }
    dance_state[8].step = 0;
}
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case DOUBLE_TAP: layer_move(6); break;
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
    }
    dance_state[9].step = 0;
}
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case DOUBLE_TAP: layer_move(7); break;
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[11].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
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
    case DUAL_FUNC_1:
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
    case DUAL_FUNC_2:
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
    case DUAL_FUNC_3:
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
    case DUAL_FUNC_4:
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
          register_code16(BP_CCED);
        } else {
          unregister_code16(BP_CCED);
        }
      } else {
        if (record->event.pressed) {
          layer_move(5);
        } else {
          layer_move(5);
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



// Custom modifications starts here

void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!is_caps_word_on() || !record->event.pressed) return;

    uint16_t raw = keycode;
    if ((raw >= QK_MOD_TAP && raw <= QK_MOD_TAP_MAX) ||
        (raw >= QK_LAYER_TAP && raw <= QK_LAYER_TAP_MAX)) {
        raw = raw & 0xFF;
    }

    if (raw == KC_C || raw == KC_H || raw == KC_V ||
        raw == KC_X || raw == KC_G) {
        tap_code16(S(raw));
    }
}

bool caps_word_press_user(uint16_t keycode) {
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) {
        keycode = keycode & 0xFF;
    }

    switch (keycode) {
        case KC_1: case KC_2: case KC_3: case KC_4: case KC_5:
        case KC_6: case KC_7: case KC_9: case KC_0:
            return true;

        case KC_8:    // BP_MINS → _
            add_weak_mods(MOD_BIT(KC_LSFT));
            return true;

        case KC_BSPC:
            return true;

        case KC_SPACE: case KC_ENTER: case KC_TAB: case KC_ESCAPE:
        case KC_DOT: case KC_COMM:
            return false;

        case KC_LSFT: case KC_RSFT:
        case KC_LCTL: case KC_RCTL:
        case KC_LALT: case KC_RALT:
        case KC_LGUI: case KC_RGUI:
            return true;

        default:
            if (keycode < 0x100) {
                add_weak_mods(MOD_BIT(KC_LSFT));
                return true;
            }
            return false;
    }
}