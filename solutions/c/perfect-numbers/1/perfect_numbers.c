#include "perfect_numbers.h"
#include <stdio.h>

kind classify_number(int number){
    
    if (number <= 0) return ERROR;

    int sum = 0;
   
    for(int i=1; i <= number / 2; ++i)
    {
        if (number%i == 0)
        {
            sum += i;
        
           
        }
        
    }    

    if (sum == number) return PERFECT_NUMBER;
    if (sum > number) return ABUNDANT_NUMBER;
    return DEFICIENT_NUMBER;
 }
