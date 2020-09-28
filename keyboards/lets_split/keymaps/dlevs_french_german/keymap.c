#include QMK_KEYBOARD_H


// ------------------------------------------------------------------------------
// START OF AUTOMATICALLY GENERATED CODE BY RUNNING "node generate-sequence.js"
// ------------------------------------------------------------------------------

enum custom_keycodes {
  EURO = SAFE_RANGE,
  a_GRAVE,
  A_GRAVE,
  a_CIRCM,
  A_CIRCM,
  a_UMLUT,
  A_UMLUT,
  e_ACUTE,
  E_ACUTE,
  e_GRAVE,
  E_GRAVE,
  e_CIRCM,
  E_CIRCM,
  e_UMLUT,
  E_UMLUT,
  i_CIRCM,
  I_CIRCM,
  i_UMLUT,
  I_UMLUT,
  o_UMLUT,
  O_UMLUT,
  o_CIRCM,
  O_CIRCM,
  u_GRAVE,
  U_GRAVE,
  u_UMLUT,
  U_UMLUT,
  u_CIRCM,
  U_CIRCM,
  cedilla,
  CEDILLA,
  oethel,
  OETHEL,
  ESZETT,
  LAQUO,
  RAQUO,
  BDQUO,
  LDQUO
};

void do_alt_sequence(uint16_t key1, uint16_t key2, uint16_t key3, uint16_t key4) {
    register_code(KC_NLCK);
    unregister_code(KC_NLCK);

    register_code(KC_LALT);

    register_code(key1);
    unregister_code(key1);

    register_code(key2);
    unregister_code(key2);

    register_code(key3);
    unregister_code(key3);

    register_code(key4);
    unregister_code(key4);

    unregister_code(KC_LALT);

    register_code(KC_NLCK);
    unregister_code(KC_NLCK);
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {

                        case EURO:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_1, KC_KP_2, KC_KP_8);
                            }
                            return false; break;

                        case a_GRAVE:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_2, KC_KP_4);
                            }
                            return false; break;

                        case A_GRAVE:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_1, KC_KP_9, KC_KP_2);
                            }
                            return false; break;

                        case a_CIRCM:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_2, KC_KP_6);
                            }
                            return false; break;

                        case A_CIRCM:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_1, KC_KP_9, KC_KP_4);
                            }
                            return false; break;

                        case a_UMLUT:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_2, KC_KP_8);
                            }
                            return false; break;

                        case A_UMLUT:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_1, KC_KP_9, KC_KP_6);
                            }
                            return false; break;

                        case e_ACUTE:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_3, KC_KP_3);
                            }
                            return false; break;

                        case E_ACUTE:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_0, KC_KP_1);
                            }
                            return false; break;

                        case e_GRAVE:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_3, KC_KP_2);
                            }
                            return false; break;

                        case E_GRAVE:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_0, KC_KP_0);
                            }
                            return false; break;

                        case e_CIRCM:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_3, KC_KP_4);
                            }
                            return false; break;

                        case E_CIRCM:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_0, KC_KP_2);
                            }
                            return false; break;

                        case e_UMLUT:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_3, KC_KP_5);
                            }
                            return false; break;

                        case E_UMLUT:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_0, KC_KP_3);
                            }
                            return false; break;

                        case i_CIRCM:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_3, KC_KP_8);
                            }
                            return false; break;

                        case I_CIRCM:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_0, KC_KP_6);
                            }
                            return false; break;

                        case i_UMLUT:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_3, KC_KP_9);
                            }
                            return false; break;

                        case I_UMLUT:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_0, KC_KP_7);
                            }
                            return false; break;

                        case o_UMLUT:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_4, KC_KP_6);
                            }
                            return false; break;

                        case O_UMLUT:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_1, KC_KP_4);
                            }
                            return false; break;

                        case o_CIRCM:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_4, KC_KP_4);
                            }
                            return false; break;

                        case O_CIRCM:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_1, KC_KP_2);
                            }
                            return false; break;

                        case u_GRAVE:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_4, KC_KP_9);
                            }
                            return false; break;

                        case U_GRAVE:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_1, KC_KP_7);
                            }
                            return false; break;

                        case u_UMLUT:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_5, KC_KP_2);
                            }
                            return false; break;

                        case U_UMLUT:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_2, KC_KP_0);
                            }
                            return false; break;

                        case u_CIRCM:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_5, KC_KP_1);
                            }
                            return false; break;

                        case U_CIRCM:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_1, KC_KP_9);
                            }
                            return false; break;

                        case cedilla:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_3, KC_KP_1);
                            }
                            return false; break;

                        case CEDILLA:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_1, KC_KP_9, KC_KP_9);
                            }
                            return false; break;

                        case oethel:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_1, KC_KP_5, KC_KP_6);
                            }
                            return false; break;

                        case OETHEL:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_1, KC_KP_4, KC_KP_0);
                            }
                            return false; break;

                        case ESZETT:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_2, KC_KP_2, KC_KP_3);
                            }
                            return false; break;

                        case LAQUO:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_1, KC_KP_7, KC_KP_1);
                            }
                            return false; break;

                        case RAQUO:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_1, KC_KP_8, KC_KP_7);
                            }
                            return false; break;

                        case BDQUO:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_1, KC_KP_3, KC_KP_2);
                            }
                            return false; break;

                        case LDQUO:
                            if (record->event.pressed) {
                                do_alt_sequence(KC_KP_0, KC_KP_1, KC_KP_4, KC_KP_7);
                            }
                            return false; break;

        }
    }

    return true;
};

// ------------------------------------------------------------------------------
// END OF AUTOMATICALLY GENERATED CODE BY RUNNING "node generate-sequence.js"
// ------------------------------------------------------------------------------


#define _LAYER_LOWERCASE 0
#define _LAYER_UPPERCASE 1
#define _LAYER_ADMIN 2

#define UPPER TG(_LAYER_UPPERCASE)

// Admin key gives access to the admin layer when held (for reset),
// or acts as numlock when tapped (for troubleshooting - keyboard
// relies upon numlock).
#define ADMIN LT(_LAYER_ADMIN, KC_NLCK)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_LAYER_LOWERCASE] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, ADMIN,  BDQUO,   LDQUO,   oethel,  e_GRAVE, cedilla,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, UPPER,  LAQUO,   RAQUO,   a_GRAVE, e_ACUTE, u_GRAVE,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, ESZETT, o_UMLUT, i_UMLUT, a_UMLUT, e_UMLUT, u_UMLUT,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, EURO,   o_CIRCM, i_CIRCM, a_CIRCM, e_CIRCM, u_CIRCM
  ),

  [_LAYER_UPPERCASE] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, ADMIN,  BDQUO,   LDQUO,   OETHEL,  E_GRAVE, CEDILLA,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, UPPER,  LAQUO,   RAQUO,   A_GRAVE, E_ACUTE, U_GRAVE,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, ESZETT, O_UMLUT, I_UMLUT, A_UMLUT, E_UMLUT, U_UMLUT,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, EURO,   O_CIRCM, I_CIRCM, A_CIRCM, E_CIRCM, U_CIRCM
  ),

  // Admin layer - just "reset" function
  [_LAYER_ADMIN] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  )

};
