#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
};



enum tap_dance_codes {
  DANCE_0,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      HU_0,           HU_1,           HU_2,           HU_3,           HU_4,           HU_SS,                                          LCTL(KC_KP_PLUS),HU_5,           HU_6,           HU_7,           HU_8,           HU_9,           ST_MACRO_0,     
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TAB,                                         ST_MACRO_1,     HU_Z,           KC_U,           KC_I,           KC_O,           KC_P,           ST_MACRO_2,     
    KC_BSPC,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_DELETE,                                                                      LCTL(KC_KP_MINUS),KC_H,           KC_J,           KC_K,           KC_L,           KC_SPACE,       KC_ENTER,       
    KC_DELETE,      HU_Y,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_UP,          HU_COMM,        HU_DOT,         OSM(MOD_RCTL),  
    KC_ENTER,       KC_MS_WH_LEFT,  KC_MS_WH_RIGHT, OSM(MOD_LALT),  OSM(MOD_LSFT),  KC_ENTER,                                                                                                       KC_ESCAPE,      KC_LEFT,        KC_DOWN,        KC_RIGHT,       OSM(MOD_RSFT),  OSM(MOD_RALT),  
    OSM(MOD_LCTL),  LCTL(KC_LEFT_SHIFT),TT(4),                          MO(5),          OSM(MOD_LALT),  OSL(1)
  ),
  [1] = LAYOUT_moonlander(
    RALT(HU_A),     HU_AA,          ST_MACRO_3,     HU_EE,          RALT(KC_O),     RALT(KC_P),     ST_MACRO_4,                                     HU_UEE,         HU_UU,          HU_UE,          HU_II,          HU_OE,          HU_OO,          HU_OEE,         
    ST_MACRO_5,     HU_AT,          HU_TILD,        HU_QST,         HU_EXLM,        HU_EURO,        ST_MACRO_6,                                     ST_MACRO_7,     KC_KP_EQUAL,    HU_LBRC,        HU_SCLN,        HU_RBRC,        HU_UNDS,        HU_ACUT,        
    KC_LEFT_GUI,    HU_QUOT,        HU_DLR,         KC_KP_SLASH,    KC_KP_ASTERISK, HU_AMPR,        HU_PIPE,                                                                        ST_MACRO_8,     KC_KP_MINUS,    HU_LPRN,        HU_COLN,        HU_RPRN,        HU_DQOT,        HU_GRV,         
    KC_AUDIO_VOL_UP,HU_CIRC,        HU_HASH,        HU_LESS,        HU_MORE,        HU_BSLS,                                        KC_KP_PLUS,     HU_LCBR,        KC_PAGE_UP,     HU_RCBR,        HU_PERC,        ST_MACRO_9,     
    KC_AUDIO_VOL_DOWN,KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_TRANSPARENT, KC_TRANSPARENT, KC_SYSTEM_SLEEP,                                                                                                QK_BOOT,        KC_HOME,        KC_PGDN,        KC_END,         ST_MACRO_10,    ST_MACRO_11,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, HU_AA,          ST_MACRO_12,    HU_EE,          RALT(KC_O),     RALT(KC_P),     KC_TRANSPARENT,                                 HU_UEE,         HU_UU,          HU_UE,          HU_II,          HU_OE,          HU_OO,          HU_OEE,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HU_PERC,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_0),                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, MO(3)
  ),
  [3] = LAYOUT_moonlander(
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_NO,          HU_AT,          HU_TILD,        HU_QST,         HU_EXLM,        ST_MACRO_13,    ST_MACRO_14,                                    ST_MACRO_15,    KC_KP_EQUAL,    HU_LBRC,        HU_RBRC,        HU_GRV,         HU_UNDS,        HU_ACUT,        
    KC_NO,          RALT(KC_A),     HU_SS,          KC_KP_SLASH,    KC_KP_ASTERISK, HU_DLR,         HU_EURO,                                                                        ST_MACRO_16,    KC_KP_MINUS,    HU_LPRN,        HU_RPRN,        HU_DQOT,        HU_COLN,        HU_SCLN,        
    KC_NO,          HU_CIRC,        HU_HASH,        HU_LESS,        HU_MORE,        HU_BSLS,                                        KC_KP_PLUS,     HU_LCBR,        HU_RCBR,        HU_QUOT,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                                                          KC_TRANSPARENT, HU_AMPR,        HU_PIPE,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT,                 KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_NO,                                          KC_NO,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_F11,         KC_F12,         KC_F13,         KC_F14,         KC_TRANSPARENT,                                 KC_KP_SLASH,    KC_KP_EQUAL,    HU_7,           HU_8,           HU_9,           KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_LEFT_ALT,    KC_NO,          KC_KP_SLASH,    KC_KP_ASTERISK, KC_AUDIO_MUTE,  KC_TRANSPARENT,                                                                 KC_KP_ASTERISK, KC_KP_MINUS,    HU_4,           HU_5,           HU_6,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_KP_PLUS,     HU_1,           HU_2,           HU_3,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, HU_DOT,         HU_0,           HU_COMM,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 OSM(MOD_RSFT),  KC_TRANSPARENT, OSM(MOD_RCTL)
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, RGB_HUI,        RGB_SAI,        MOON_LED_LEVEL, LCTL(KC_KP_PLUS),KC_BRIGHTNESS_UP,KC_AUDIO_VOL_UP,                                KC_SYSTEM_SLEEP,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HU_OE,          
    KC_APPLICATION, RGB_HUD,        RGB_SAD,        KC_MS_WH_UP,    LCTL(KC_KP_MINUS),KC_BRIGHTNESS_DOWN,KC_AUDIO_VOL_DOWN,                                HU_OEE,         KC_TRANSPARENT, KC_KP_SLASH,    KC_UP,          KC_PAGE_UP,     KC_TRANSPARENT, HU_OO,          
    KC_LEFT_GUI,    KC_MS_BTN4,     KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_MS_BTN5,     KC_AUDIO_MUTE,                                                                  ST_MACRO_18,    KC_HOME,        KC_LEFT,        KC_RIGHT_CTRL,  KC_RIGHT,       KC_END,         KC_RIGHT_SHIFT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_17,                                    ST_MACRO_19,    ST_MACRO_20,    KC_DOWN,        KC_PGDN,        KC_TRANSPARENT, KC_TRANSPARENT, 
    QK_BOOT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, AU_TOGG,                                                                                                        KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_NO
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, DE_AT,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AT,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DE_LCBR,        DE_RCBR,                                        KC_TRANSPARENT, KC_Z,           KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_LCBR,        KC_RCBR,                                                                        KC_TRANSPARENT, KC_MS_BTN4,     KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_BTN5,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Y,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {7,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,225,244}, {0,0,0}, {0,0,0}, {0,0,0}, {139,225,244}, {139,225,244}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,225,244}, {0,0,0}, {0,0,0}, {41,178,246}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {180,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {134,255,213}, {85,203,158}, {0,0,0}, {0,0,0}, {134,255,213}, {134,255,213}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {134,255,213}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
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
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_GRAVE) SS_DELAY(100) SS_TAP(X_8)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_GRAVE) SS_DELAY(100) SS_TAP(X_B)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_GRAVE) SS_DELAY(100) SS_TAP(X_1)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_6) SS_DELAY(100) SS_TAP(X_GRAVE)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_GRAVE)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_1) SS_DELAY(100) SS_TAP(X_9) SS_DELAY(100) SS_TAP(X_GRAVE)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_1) SS_DELAY(100) SS_TAP(X_9) SS_DELAY(100) SS_TAP(X_2)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_GRAVE) SS_DELAY(100) SS_TAP(X_1) SS_DELAY(100) SS_TAP(X_4)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_GRAVE) SS_DELAY(100) SS_TAP(X_1) SS_DELAY(100) SS_TAP(X_3)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_5)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_B)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_B)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_5)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_B)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_B)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_GRAVE) SS_DELAY(100) SS_TAP(X_1) SS_DELAY(100) SS_TAP(X_4)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_GRAVE) SS_DELAY(100) SS_TAP(X_1) SS_DELAY(100) SS_TAP(X_3)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_X)) SS_DELAY(100) SS_TAP(X_B));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_COMMA)) SS_DELAY(100) SS_RALT(SS_TAP(X_COMMA)));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_KP_SLASH) SS_DELAY(100) SS_TAP(X_KP_SLASH));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_KP_SLASH) SS_DELAY(100) SS_TAP(X_KP_ASTERISK) SS_DELAY(100) SS_TAP(X_KP_ASTERISK) SS_DELAY(100) SS_TAP(X_KP_ASTERISK) SS_DELAY(100) SS_TAP(X_KP_SLASH));
    }
    break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
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

static tap dance_state[1];

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
        case SINGLE_TAP: layer_move(0); break;
        case SINGLE_HOLD: layer_move(0); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: layer_move(0); break;
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
};
