RGB_MATRIX_EFFECT(LOWER)
RGB_MATRIX_EFFECT(RAISE)
RGB_MATRIX_EFFECT(IDLE)

/************************
 *   COLOR VARIATIONS   *
 ************************/
#define COL_BLUE      0x00, 0x13, 0xf0
#define COL_PURPLE    0x6f, 0x13, 0xf0
#define COL_PURPLE_J  0x8c, 0x13, 0xf0 // Joker / EVA purple
#define COL_PINK      0xf0, 0x13, 0xec
#define COL_NEON_GRN  0x43, 0xf0, 0x13 // EVA green
#define COL_GOLD      0xf0, 0x81, 0x13
#define COL_RED       0xff, 0x13, 0x13
// Layout
//  9 10 17 18 23 24
//  8 11 16 19 22 25
//  7 12 15 20 21 26
//  14 13 6

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS
/************************
 *   KEY GROUPS
 ************************/
int underglow[]             = {0, 1, 2, 3, 4, 5, 27, 28, 29, 30, 31, 32};
int arrow_keys[]            = {16, 17, 19, 11};
int numbers[]               = {16, 17, 19, 11, 10, 18, 12, 20, 21, 15};
int all_keys[]              = {7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
int layer_keys[]            = {13};

/************************
 *   HELPER FUNCTIONS
 ************************/
static void set_group_color(const int *group, size_t size, uint8_t r, uint8_t g, uint8_t b) {
    for (size_t i = 0; i < size; i++) {
        // RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(group[i], r, g, b);
    }
}

static void clear_all(uint8_t led_min, uint8_t led_max) {
    for (uint8_t i = led_min; i < led_max; i++) {
        // RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0, 0, 0);
    }
}

/************************
 *   EFFECTS
 ************************/

static bool LOWER(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    clear_all(led_min, led_max);

    set_group_color(underglow, ARRAY_SIZE(underglow), COL_RED);

    if (is_keyboard_master()) {
        set_group_color(arrow_keys, ARRAY_SIZE(arrow_keys), COL_RED);
    } else {
        set_group_color(numbers, ARRAY_SIZE(numbers), COL_RED);
    }

    return rgb_matrix_check_finished_leds(led_max);
}

static bool RAISE(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    clear_all(led_min, led_max);

    set_group_color(underglow, ARRAY_SIZE(underglow), COL_BLUE);

    // Example: enable if wanted
    // set_group_color(fkeys, ARRAY_SIZE(fkeys), COL_NEON_GRN);

    return rgb_matrix_check_finished_leds(led_max);
}

static bool IDLE(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    clear_all(led_min, led_max);

    set_group_color(underglow, ARRAY_SIZE(underglow), COL_PURPLE_J);

    if (is_keyboard_master()) {
        set_group_color(layer_keys, ARRAY_SIZE(layer_keys), COL_PINK);
    } else {
        set_group_color(layer_keys, ARRAY_SIZE(layer_keys), COL_BLUE);
    }

    return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
