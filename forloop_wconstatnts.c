#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    /* converting celsius to fahrenheit
    using for loops. Now I added it some constants */
    int fahr, c;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        c = (5.0/9.0)*(fahr-32); // the formula stored in a variable.
        printf("%d %.2f\n", fahr, c); // print temp. in order: celsius and fahrenheit.
    }
    return 0;
}