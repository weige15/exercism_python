#include "rna_transcription.h"

#include <stdlib.h>
#include <string.h>

static char map_base(char b) {
    switch (b) {
        case 'G': return 'C';
        case 'C': return 'G';
        case 'T': return 'A';
        case 'A': return 'U';
        default:  return 0;   // 0 means “invalid”
    }
}

char *to_rna(const char *dna) {
    if (!dna) return NULL;

    size_t n = strlen(dna);
    char *rna = malloc(n + 1);
    if (!rna) return NULL;

    // TODO: loop over dna[0..n-1], map each base with map_base,
    //       handle invalid (map_base==0) per your policy,
    //       write into rna[i].
    // rna[n] = '\0';
    for (size_t i = 0; i < n; i++) {
        char m = map_base(dna[i]);
        if (!m) {           // invalid base
            free(rna);
            return NULL;
        }
        rna[i] = m;
    }
    rna[n] = '\0';

    return rna;
}