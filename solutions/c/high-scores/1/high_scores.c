#include "high_scores.h"
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

/// Return the latest score.
int32_t latest(const int32_t *scores, size_t scores_len) {
    return scores[scores_len - 1];
}

/// Return the highest score.
int32_t personal_best(const int32_t *scores, size_t scores_len) {
    int32_t biggest = 0;
    for (size_t i = 0; i < scores_len; i++) {
        if (scores[i] > biggest) {
            biggest = scores[i];
        }
    }
    return biggest;
}

/// Write the highest scores to `output` (in non-ascending order).
size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output) {
    size_t count = 0;
    int32_t top1 = -1, top2 = -1, top3 = -1;

    for (size_t i = 0; i < scores_len; i++) {
        int32_t current = scores[i];

        if (current > top1) {
            top3 = top2;
            top2 = top1;
            top1 = current;
        } else if (current > top2) {
            top3 = top2;
            top2 = current;
        } else if (current > top3) {
            top3 = current;
        }
    }

    // Fill the output array and determine the return count
    if (scores_len > 0) output[count++] = top1;
    if (scores_len > 1) output[count++] = top2;
    if (scores_len > 2) output[count++] = top3;

    return count;
}