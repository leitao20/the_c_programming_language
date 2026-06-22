#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    /* converting celsius to fahrenheit
    using for loops. Now I added it some constants */
    int c;
    double fahr;

    for (c = UPPER; c >= LOWER; c = c - STEP) {
        fahr = (9.0/5.0*c) + 32; // the formula stored in a variable.
        printf("%d %.0f\n", c, fahr); // print temp. in order: celsius and fahrenheit.
    }
    return 0;
}