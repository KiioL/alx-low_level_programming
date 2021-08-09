#include <stdio.h>
#include "main.h"

/**
 * print_line - Entry point
 * Prints
 * @n: parameter
 * Return: Void
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n > 0)
{
_putchar(95);
n--;
}
_putchar('\n');
}
}
