#include "hamming.h"
int compute(const char *l, const char *r){
    int count = 0;
    if(!l || !r) return -1;
    for(;*l != '\0' && *r != '\0'; ++l, ++r){
        if(*l != *r) ++count;
    }
    if(*l != *r) return -1;  //✅ Unequal lengths: e.g., "ABC" vs "AB" → loop stops at 'C' vs '\0'; *l != *r → returns -1.

    /*
    
    After the loop, at least one string is at '\0'.

    If exactly one ended (unequal lengths), their current chars differ ('\0' vs non-'\0'), so return -1 (Hamming distance undefined for different lengths).
    
    If both ended, *l == *r == '\0' and lengths are equal.

    */

    return count;


    
}
