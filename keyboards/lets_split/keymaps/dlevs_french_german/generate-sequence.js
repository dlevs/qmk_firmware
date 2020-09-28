// Run this script to generate the C code for the alt sequences.
// My C skills are too bad to do DRY in C code alone.

const sequences = {
    EURO: '0128',

    a_GRAVE: '0224',
    A_GRAVE: '0192',

    a_CIRCM: '0226',
    A_CIRCM: '0194',

    a_UMLUT: '0228',
    A_UMLUT: '0196',

    // E
    e_ACUTE: '0233', // é
    E_ACUTE: '0201',

    e_GRAVE: '0232', // è
    E_GRAVE: '0200',

    e_CIRCM: '0234', // ê
    E_CIRCM: '0202',

    e_UMLUT: '0235', // ë
    E_UMLUT: '0203',

    // I
    i_CIRCM: '0238',
    I_CIRCM: '0206',

    i_UMLUT: '0239',
    I_UMLUT: '0207',

    // O
    o_UMLUT: '0246',
    O_UMLUT: '0214',

    o_CIRCM: '0244',
    O_CIRCM: '0212',

    // U
    u_GRAVE: '0249',
    U_GRAVE: '0217',

    u_UMLUT: '0252',
    U_UMLUT: '0220',

    u_CIRCM: '0251',
    U_CIRCM: '0219',

    // ç
    cedilla: '0231',
    CEDILLA: '0199',

    // œ
    oethel: '0156',
    OETHEL: '0140',

    // ß
    ESZETT: '0223',

    // « (left angle quote)
    LAQUO: '0171',

    // » (right angle quote)
    RAQUO: '0187',

    // „ (bottom curly quote)
    BDQUO: '0132',

    // ” (Left curly quote)
    LDQUO: '0147'
};

console.log(`
// ------------------------------------------------------------------------------
// START OF AUTOMATICALLY GENERATED CODE BY RUNNING "node generate-sequence.js"
// ------------------------------------------------------------------------------

enum custom_keycodes {
  ${Object
    .keys(sequences)
    .map((key, i) => i === 0 ? `${key} = SAFE_RANGE` : key)
    .join(',\n  ')
  }
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
            ${Object
                .keys(sequences)
                .map(key => {
                    return `
                        case ${key}:
                            if (record->event.pressed) {
                                do_alt_sequence(${
                                    [...sequences[key]].map(char => `KC_KP_${char}`).join(', ')
                                });
                            }
                            return false; break;
                    `
                })
                .join('')
            }
        }
    }

    return true;
};

// ------------------------------------------------------------------------------
// END OF AUTOMATICALLY GENERATED CODE BY RUNNING "node generate-sequence.js"
// ------------------------------------------------------------------------------
`)
