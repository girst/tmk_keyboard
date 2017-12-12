#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   /* Layer: Base Layer
    * ,-------------------------------------------------.
    * |Esc|  Q|  W|  E|  R|  T|  Z|  U|  I|  O|  P| BSp |
    * |-------------------------------------------------|
    * |C/^I|  A|  S|  D|  F|  G|  H|  J|  K|  L|  /|Fn2 |
    * |-------------------------------------------------|
    * |Shift|  Y|  X|  C|  V|  B|  N|  M|  ,|  .|  -|Sft|
    * |-------------------------------------------------|
    * |Alt |  XXX  |XXX |Enter| Space |XXX |XXX  |  Fn3 |
    * `-------------------------------------------------'
    */
   KEYMAP(
     ESC ,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,  BSPC, \
     LCTRL,   A,   S,   D,   F,   G,   H,   J,   K,   L,FN11, FN2,  \
     LSHIFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH, RSHIFT, \
     LALT,  FN1,  LGUI,     ENT,       SPC,   RALT,   RSFT,  FN3    ),

   /* Layer: Movement Layer (wrd=ctrl-right, bck=crtl-left) TOGGLE
    * ,-------------------------------------------------.
    * |   |   |wrd|   |END|   |   |PUp|   |   |Hom| Del |
    * |-------------------------------------------------|
    * |    |   |   |PDn|   |   |Lft| Up| Dn| Rt|   |    |
    * |-------------------------------------------------|
    * |     |Psc|   |   |   |bck|   |   |   |   |   |   |
    * |-------------------------------------------------|
    * |    |  Gui  |    |     |       |    |     |      |
    * `-------------------------------------------------'
    */
   KEYMAP(
     GRV , FN4, FN5, FN6, FN7, FN8, FN9,FN10,FN11,FN12,FN13,   DEL, \
     TRNS ,BSLS,QUOT,MINS, EQL,LBRC,RBRC,DOWN,  UP,LEFT,RGHT, TRNS, \
     TRNS  , ESC,FN20,PSCR,TRNS,TRNS,TRNS,MSTP,MPLY,MPRV,MNXT,RSFT, \
     TRNS, LGUI,  TRNS,    TRNS,      TRNS,   TRNS,   TRNS,  TRNS   ),

   /* Layer: Numbers and ASCII-Symbols Layer MOMENTARY+TOGGLE
    * ,-------------------------------------------------.
    * |  ^|  !|  "|  §|  $|  %|  &|  /|  (|  )|  =|   ? |
    * |-------------------------------------------------|
    * |   `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  ' |
    * |-------------------------------------------------|
    * |    #|  <|  ||  >|  +|  *|  {|  [|  ]|  }|  \|  ~| TODO: < | > { [ ] } \ ~
    * |-------------------------------------------------|
    * |    |       |    |     |       |    |     |      |
    * `-------------------------------------------------'
    */
   KEYMAP(
     GRV , FN5, FN6, FN7, FN8, FN9,FN10,FN11,FN12,FN13,FN14,  FN17, \
     FN18 ,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0, FN15, \
     BSLS  ,TRNS,TRNS,TRNS,RBRC,FN20,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
     TRNS, TRNS,  TRNS,    TRNS,      TRNS,   TRNS,   TRNS,  TRNS   ),

   /* Layer: Layer for Function keys and Unicode Symbols MOMENTARY
    * ,-------------------------------------------------.
    * | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|  F12|
    * |-------------------------------------------------|
    * |    |   |   |   |   |   |   |   |  Ä|  Ö|  Ü|Entr|
    * |-------------------------------------------------|
    * |     |LED|Fls|  °|  ²|  ³|  µ|  ä|  ö|  ü|  ß|   |
    * |-------------------------------------------------|
    * |    |       |    |Space| Enter |    |     |      |
    * `-------------------------------------------------'
    */
   KEYMAP(
     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  F1,  F2,  F3,  F4,  TRNS, \
     ESC  ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  F5,  F6,  F7,  F8,  ENT, \
     LSFT  ,   1,   2,   3,   4,   5,   6,  F9, F10, F11, F12,RSFT, \
     TRNS, LSFT,     B,     SPC,         C,   TRNS,   TRNS,  TRNS  ),
};

const action_t PROGMEM fn_actions[] = {
  /*[0]  = ???,*/
    [1]  = ACTION_LAYER_MOMENTARY(1),
    [2]  = ACTION_LAYER_MOMENTARY(2),
    [3]  = ACTION_LAYER_MOMENTARY(3),
    [4]  = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
    [5]  = ACTION_MODS_KEY(MOD_LSFT, KC_1),
    [6]  = ACTION_MODS_KEY(MOD_LSFT, KC_2),
    [7]  = ACTION_MODS_KEY(MOD_LSFT, KC_3),
    [8]  = ACTION_MODS_KEY(MOD_LSFT, KC_4),
    [9]  = ACTION_MODS_KEY(MOD_LSFT, KC_5),
    [10]  = ACTION_MODS_KEY(MOD_LSFT, KC_6),
    [11] = ACTION_MODS_KEY(MOD_LSFT, KC_7),
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_8),
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
    [15] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS), // #' key
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),
    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS), // ß?\ key
    [18] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),  // ´` key
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC), // ü key
    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC), // +*~ key
    [21] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_ESC),
    [22] = ACTION_MODS_TAP_KEY(MOD_LCTRL, KC_TAB)
};
