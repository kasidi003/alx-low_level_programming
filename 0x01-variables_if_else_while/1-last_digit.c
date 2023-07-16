#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    /* Generate a random number and assign it to n */
    srand(time(0));
    n = rand();

    /* Print the number */
    printf("Last digit of %d is ", n);

    /* Extract the last digit of n */
    int lastDigit = n % 10;

    /* Print the last digit */
    printf("%d", lastDigit);

    /* Check the last digit and print the appropriate message */
    if (lastDigit > 5) {
        printf(" and is greater than 5\n");
    } else if (lastDigit == 0) {
        printf(" and is 0\n");
    } else {
        printf(" and is less than 6 and not 0\n");
    }

    return 0;
}
