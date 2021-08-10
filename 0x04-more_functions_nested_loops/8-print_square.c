#include <stdio.h>
#include "main.h"

/**
 * print_square - Entry point
 * Prints
 * @size: parameter
 * Return: Void
 */

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int z;

for (z = 0; z < size; z++)
{
int x = 0;

while (x < size)
{
_putchar(35);
x++;
}
_putchar('\n');
}
}
}
