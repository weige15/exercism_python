#include "darts.h"
#include <math.h>
#include <stdint.h>

uint8_t score(coordinate_t p){
    double distance = hypot(p.x, p.y);

    if (distance <= 1.0F) {
        return 10;
    } else if(distance <= 5.0F){
        return 5;
    } else if(distance <= 10.0F) {
        return 1;
    }
    return 0;

}
