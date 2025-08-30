#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assigns a random number to n and prints whether
 *        it is positive, negative, or zero
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int n;

    srand(time(0));   /* Use the current time as the seed for the random number */
    n = rand() - RAND_MAX / 2; /* Generate a random number between -RAND_MAX/2 and RAND_MAX/2 */

    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative\n", n);
    }
    else
    {
        printf("%d is zero\n", n);
    }

    return (0);
}
