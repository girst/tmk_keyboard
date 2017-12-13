#include "actionmap.h"
#include "action_code.h"
#include "actionmap_common.h"
   // use ____ or T0D0 as keyboard keys in KEYMAP
   #define AC_____ AC_NO
   #define AC_TODO AC_NO


/* TODO XXX TODO:
 * define bottom row Fn keys
 */

// action key names are from german layout!
#define AC_FN1  ACTION_LAYER_MOMENTARY(1)
#define AC_FN2  ACTION_LAYER_MOMENTARY(2)
#define AC_FN3  ACTION_LAYER_MOMENTARY(3)
#define AC_DEG  ACTION_MODS_KEY(MOD_LSFT, KC_GRV)
#define AC_EXCL ACTION_MODS_KEY(MOD_LSFT, KC_1)
#define AC_DQOT ACTION_MODS_KEY(MOD_LSFT, KC_2)
#define AC_SECT ACTION_MODS_KEY(MOD_LSFT, KC_3)
#define AC_DLLR ACTION_MODS_KEY(MOD_LSFT, KC_4)
#define AC_PERC ACTION_MODS_KEY(MOD_LSFT, KC_5)
#define AC_AMP  ACTION_MODS_KEY(MOD_LSFT, KC_6)
#define AC_SLAS ACTION_MODS_KEY(MOD_LSFT, KC_7)
#define AC_LPAR ACTION_MODS_KEY(MOD_LSFT, KC_8)
#define AC_RPAR ACTION_MODS_KEY(MOD_LSFT, KC_9)
#define AC_EQUL ACTION_MODS_KEY(MOD_LSFT, KC_0)
#define AC_QEST ACTION_MODS_KEY(MOD_LSFT, KC_MINS)
#define AC_GRAV ACTION_MODS_KEY(MOD_LSFT, KC_EQL)
#define AC_SUP2 ACTION_MODS_KEY(MOD_RALT, KC_2)
#define AC_SUP3 ACTION_MODS_KEY(MOD_RALT, KC_3)
#define AC_LBRA ACTION_MODS_KEY(MOD_RALT, KC_7)
#define AC_LBRK ACTION_MODS_KEY(MOD_RALT, KC_8)
#define AC_RBRK ACTION_MODS_KEY(MOD_RALT, KC_9)
#define AC_RBRA ACTION_MODS_KEY(MOD_RALT, KC_0)
#define AC_BKSL ACTION_MODS_KEY(MOD_RALT, KC_MINS)
#define AC_ASTK ACTION_MODS_KEY(MOD_LSFT, KC_RBRC)
#define AC_SQOT ACTION_MODS_KEY(MOD_LSFT, KC_NUHS)
#define AC_AT   ACTION_MODS_KEY(MOD_RALT, KC_Q)
#define AC_EUR  ACTION_MODS_KEY(MOD_RALT, KC_E)
#define AC_TILD ACTION_MODS_KEY(MOD_RALT, KC_RBRC)
#define AC_RANG ACTION_MODS_KEY(MOD_LSFT, KC_NUBS)
#define AC_BAR  ACTION_MODS_KEY(MOD_RALT, KC_NUBS)
#define AC_MU   ACTION_MODS_KEY(MOD_RALT, KC_M)
#define AC_CIRC AC_GRV
#define AC_SS   AC_MINS
#define AC_PLUS AC_RBRC
#define AC_HASH AC_NUHS
#define AC_LANG AC_NUBS
#define AC_DASH AC_SLSH
#define AC_WORD ACTION_MODS_KEY(MOD_LCTL, KC_RIGHT)
#define AC_BACK ACTION_MODS_KEY(MOD_LCTL, KC_LEFT)
#define AC_AUML ACTION_MODS_KEY(MOD_LSFT, KC_QUOT)
#define AC_OUML ACTION_MODS_KEY(MOD_LSFT, KC_SCLN)
#define AC_UUML ACTION_MODS_KEY(MOD_LSFT, KC_LBRC)
#define AC_aUML AC_QUOT
#define AC_oUML AC_SCLN
#define AC_uUML AC_LBRC


const action_t PROGMEM actionmaps[][MATRIX_ROWS][MATRIX_COLS] = {
   /* Layer: Base Layer
    * ,-------------------------------------------------.
    * |Esc|  Q|  W|  E|  R|  T|  Z|  U|  I|  O|  P| BSp |
    * |-------------------------------------------------|
    * |Ctrl|  A|  S|  D|  F|  G|  H|  J|  K|  L|  /|Fn2 |
    * |-------------------------------------------------|
    * |Shift|  Y|  X|  C|  V|  B|  N|  M|  ,|  .|  -|Sft|
    * |-------------------------------------------------|
    * |Alt |  Tab  |Fn1 |Enter| Space |Fn1 |XXX  |  Fn3 |
    * `-------------------------------------------------'
    */
   ACTIONMAP(
     ESC ,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,  BSPC, \
     LCTRL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SLAS, FN2,  \
     LSHIFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,DASH, RSHIFT, \
     LALT,  TAB,  FN1 ,     ENT,       SPC,    FN1,   TODO,  FN3    ),

   /* Layer: Movement Layer (wrd=ctrl-right, bck=crtl-left) ~~TOGGLE~~MOMENTARY
    * ,-------------------------------------------------.
    * |Esc|   |wrd|   |END|   |   |PUp|   |Hom|   | Del |
    * |-------------------------------------------------|
    * |    |   |   |PDn|   |   |Lft| Up| Dn| Rt|   |    |
    * |-------------------------------------------------|
    * |     |PSc|   |   |   |bck|   |PAU|NUM|CAP|SCR|   |
    * |-------------------------------------------------|
    * |    |  Gui  |    |     |       |    |     |      |
    * `-------------------------------------------------'
    */
   ACTIONMAP(
     ESC ,____,WORD,____, END,____,____,PGUP,____,HOME,____,   DEL, \
     TRNS ,____,____,PGDN,____,____,LEFT,DOWN,  UP,RGHT,____, TRNS, \
     TRNS  ,PSCR,____,____,____,BACK,____,PAUS,NLCK,CAPS,SLCK,TRNS, \
     TRNS, TRNS,  TRNS,    TRNS,      TRNS,   TRNS,   TRNS,  TRNS   ),

   /* Layer: Numbers and ASCII-Symbols Layer MOMENTARY+~~TOGGLE~~
    * ,-------------------------------------------------.
    * |  ^|  !|  "|  '|  $|  %|  &|  /|  (|  )|  =|   ? |
    * |-------------------------------------------------|
    * |   `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|Fn2 |
    * |-------------------------------------------------|
    * |    #|  <|  ||  >|  +|  *|  {|  [|  ]|  }|  \|  ~|
    * |-------------------------------------------------|
    * |    |       |    |     |       |    |     |      |
    * `-------------------------------------------------'
    */
   ACTIONMAP(
     CIRC,EXCL,DQOT,SQOT,DLLR,PERC, AMP,SLAS,LPAR,RPAR,EQUL,  QEST, \
     GRAV ,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0, TRNS, \
     HASH  ,LANG, BAR,RANG,PLUS,ASTK,LBRA,LBRK,RBRK,RBRA,BKSL,TILD, \
     TRNS, TRNS,  TRNS,    TRNS,      TRNS,   TRNS,   TRNS,  TRNS   ),

   /* Layer: Layer for Function keys and Unicode Symbols MOMENTARY
    * ,-------------------------------------------------.
    * | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|  F12|
    * |-------------------------------------------------|
    * |    |   |   |   |   |   |   |   |  Ä|  Ö|  Ü|Entr|
    * |-------------------------------------------------|
    * |     |   |  §|  °|  ²|  ³|  µ|  ä|  ö|  ü|  ß|   |
    * |-------------------------------------------------|
    * |    |       |    |Space| Enter |    |     |      |
    * `-------------------------------------------------'
    */
   ACTIONMAP(
     F1  ,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11,   F12, \
     TRNS ,____,____,____,____,____,____,____,AUML,OUML,UUML,  ENT, \
     TRNS  ,____,SECT, DEG,SUP2,SUP3,  MU,aUML,oUML,uUML,  SS,TRNS, \
     TRNS, TRNS,  TRNS,     SPC,       ENT,   TRNS,   TRNS,  TRNS  ),
};
