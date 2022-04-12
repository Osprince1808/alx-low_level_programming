#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more hearders goes there */

/**
 * main - Entry point 
 * Return: Always 0 (Success)
 */

 /* betty style doc for functionmain goes there */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        if (n < 0)
        {
              printf("%i is negative\n", n);
        }

        if (n == 0)
        {
              printf("%i is negative\n", n);
        }

        if (n < 0)
        {
              printf("%i is positive\n", n);
        }

        retun (0);

}

