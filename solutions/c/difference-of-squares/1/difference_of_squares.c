#include "difference_of_squares.h"
#include <stdint.h>

unsigned int sum_of_squares(unsigned int number){

    uint64_t nn = number;
    uint64_t result = (nn * (nn + 1) * (2 * nn + 1)) / 6;
    return (unsigned int)result;
}
unsigned int square_of_sum(unsigned int number){

    uint64_t nn = number;
    uint64_t s = (nn * (nn + 1)) / 2;
    
    return (unsigned int)s*s;
    
}
unsigned int difference_of_squares(unsigned int number){

    return square_of_sum(number) - sum_of_squares(number);
}