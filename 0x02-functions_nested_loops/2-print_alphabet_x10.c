#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - Entry Point
 * Prints alphabet x10
 * Return: Void
 */

void print_alphabet_x10(void)
{
int i;
int x = 0;

while (x < 10)
{
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
x++;
}
}
 

