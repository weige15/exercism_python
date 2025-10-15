#include "eliuds_eggs.h"

unsigned int egg_count(unsigned int n){
    unsigned int count = 0;

    while (n!=0){
        n &= (n-1);
        count++;
    }

    return count;
}