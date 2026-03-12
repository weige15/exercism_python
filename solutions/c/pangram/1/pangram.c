#include "pangram.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool is_pangram(const char *sentence){
    bool found[26] = {false};
    int count = 0;

    if (sentence == NULL) {
        return false;
    }

    for (int i = 0; sentence[i] != '\0'; i++) {
        unsigned char c = (unsigned char)sentence[i];
        if (isalpha(c)) {
            int index = tolower(c) - 'a';

            if (!found[index]) {
                found[index] = true;
                count++;
            } 
        }        
    }

    return count == 26;
}