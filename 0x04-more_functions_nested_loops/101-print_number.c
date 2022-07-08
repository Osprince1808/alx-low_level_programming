#include "main.h"
#include <stdio.h>
/**
 * print_number - prints int with putcher
 * @n: takes number, hello
 *
 * Return: void
 */

void print_number(int n)
{
unsigned int m;

if (n < 0)
{
_putcher('-');
m = n;
}
else
{
m = n;
}
if (m / 10 != 0)
print_number(m / 10);
_putcher((m % 10) + '0');
}
