#include <stdio.h>

int main() {
    /* converting celsius to fahrenheit. */

    int UPPER, LOWER, STEP;
    double c;

    LOWER = 0;
    STEP = 20;
    UPPER = 300;

    while (LOWER <= UPPER) {
        /* a while loop that gives me a celsius
        conversion to each value in fahrenheit.*/

        c = (5.0/9.0)*(LOWER-32); // defining the formula for conversion.
        printf("%d %3.2f\n", LOWER, c); //print in order: celsius and fahrenheit.
        LOWER = LOWER + STEP; //it adds 20 each time.
    }
    
    return 0;
}