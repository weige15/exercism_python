#include "collatz_conjecture.h"


int steps(int start){

    int counter = 0;
    
    if ( start <= 0 )
    {
        return -1;
    }
    

    while ( start != 1)
    {
        if( start % 2 == 0 )
        {
            counter += 1;
            start /= 2;            
        }
        else
        {
            counter += 1;
            start = start * 3 + 1;        
        }

        
    }





    return counter;
}

// if ( i > 0 )
// {                      /* With braces */
//     if ( j > i )
//         x = j;
// }
// else
//     x = i;