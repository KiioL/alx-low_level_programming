#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Prints Alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;

for (x = 'Z'; x >= 'A'; x--)
{
int lower_x = tolower(x);

putchar(lower_x); }

putchar('\n');

return (0);

}
