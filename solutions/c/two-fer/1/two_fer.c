#include <stdio.h>
#include "two_fer.h"
#define BUF 128

void two_fer(char *buffer, const char *name) {
    const char *target = (name && name[0] != '\0') ? name : "you";
    // Caller must ensure `buffer` is large enough.
    snprintf(buffer, BUF, "One for %s, one for me.", target);
}
