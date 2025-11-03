#include "raindrops.h"
#include <stdio.h>    // for sprintf
#include <string.h>   // for strcat, strcpy

void convert(char result[], int drops) {
    // TODO(0): Start with an empty result string.
    // Hint: set the first byte to '\0' so strcat appends correctly.
    result[0] = '\0';
    // TODO(1): If drops is divisible by 3, append "Pling" to result.
    // Hint: if ((drops % 3) == 0) { strcat(result, "Pling"); }
    if ((drops % 3) == 0) { strcat(result, "Pling"); }
    // TODO(2): If drops is divisible by 5, append "Plang" to result.
    if ((drops % 5) == 0) { strcat(result, "Plang"); }
    // TODO(3): If drops is divisible by 7, append "Plong" to result.
    if ((drops % 7) == 0) { strcat(result, "Plong"); }
    // TODO(4): If nothing was appended (result is still empty),
    // convert the number to a string and store it in result.
    // Hint: check if result[0] == '\0'; if so, use sprintf(result, "%d", drops);
    if (result[0] == '\0') { sprintf(result, "%d", drops); }
    // NOTE:
    // - Assume the caller provides a large enough buffer in `result`
    //   (e.g., >= 16 bytes is plenty for small ints; adjust as needed).
    // - Negative numbers: divisibility checks still work; just follow the same rules.
}