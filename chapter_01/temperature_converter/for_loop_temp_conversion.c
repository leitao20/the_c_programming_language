#include <stdio.h>

int main() {
    /* converting celsius to fahrenheit but sing a for loop. */
    
    int LOWER;
    double c;

    for (LOWER = 0; LOWER <= 300; LOWER = LOWER + 20) {
        /* for every 20 added, do the
        conversion and store it in the variable c*/

        c = (5.0/9.0)*(LOWER-32);
        printf("%d %.2f\n", LOWER, c);
    }
    return 0;
}