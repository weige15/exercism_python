#include "queen_attack.h"
#include <stdlib.h>

attack_status_t can_attack(position_t q1, position_t q2) {
    // 1) Validate 0..7 and not same square
    if (q1.row >= 8 || q1.column >= 8 || q2.row >= 8 || q2.column >= 8) return INVALID_POSITION;
    if (q1.row == q2.row && q1.column == q2.column) return INVALID_POSITION;

    // 2) Same row?
    if (q1.row == q2.row) return CAN_ATTACK;

    // 3) Same column?
    if (q1.column == q2.column) return CAN_ATTACK;

    // 4) Same diagonal?  |Δrow| == |Δcol|
    int dr = (int)q1.row - (int)q2.row;
    int dc = (int)q1.column - (int)q2.column;
    if (abs(dr) == abs(dc)) return CAN_ATTACK;

    // 5) Otherwise
    return CAN_NOT_ATTACK;
}