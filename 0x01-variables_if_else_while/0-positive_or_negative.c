#include <stdlib.h>
#include <time.h
#include <stdio.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n==0)
{
printf("% is zero\n", n);
}
else if (n<0) 
{printf("% is negative\n", n);
}


else 
{
printf("%i is positive \n", n);
}


retun (0); 


}

