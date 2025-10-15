#include "binary.h"
#include <stddef.h>   // for NULL

static int is_binary_char(char c) {
    return c == '0' || c == '1';
}

int convert(const char *input) {
    if (!input) return INVALID;

    int value = 0;
    int saw_any = 0;

    for (const char *p = input; *p != '\0'; ++p) {
        if (!is_binary_char(*p)) {
            return INVALID;       // non '0'/'1' => invalid
        }
        saw_any = 1;

        // TODO: Convert current char to bit (0 or 1), then update value:
        // int bit = (*p == '1') ? 1 : 0;
        // value = value * 2 + bit;
        int bit = (*p == '1') ? 1 : 0;
        value = value * 2 + bit;

    }

    if (!saw_any) return INVALID; // empty string => invalid
    return value;
}
