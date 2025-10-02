#include "space_age.h"
#include <math.h>   // for NAN

static const double EARTH_YEAR_SECONDS = 31557600.0;

/* Must match planet_t order */
static const double ORBITAL_PERIODS[] = {
    0.2408467,   /* MERCURY */
    0.61519726,  /* VENUS   */
    1.0,         /* EARTH   */
    1.8808158,   /* MARS    */
    11.862615,   /* JUPITER */
    29.447498,   /* SATURN  */
    84.016846,   /* URANUS  */
    164.79132    /* NEPTUNE */
};

float age(planet_t planet, int64_t seconds) {
    // Defensive bounds check against invalid enum values
    const int nplanets = (int)(sizeof ORBITAL_PERIODS / sizeof ORBITAL_PERIODS[0]);
    if ((int)planet < 0 || (int)planet >= nplanets) {
        // You could also return 0.0f; NAN makes bugs obvious in tests.
        return -1;
    }

    const double planet_year_seconds = ORBITAL_PERIODS[(int)planet] * EARTH_YEAR_SECONDS;
    const double yrs = (double)seconds / planet_year_seconds;
    return (float)yrs;
}
