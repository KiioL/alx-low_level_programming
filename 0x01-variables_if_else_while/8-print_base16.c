#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Prints Numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;

for (x = 48; x <= 57; x++)
{

putchar(x); }
for (x = 'A'; x <= 'F'; x++)
{
int lower_x = tolower(x);

putchar(lower_x);
}
putchar('\n');

return (0);

}
