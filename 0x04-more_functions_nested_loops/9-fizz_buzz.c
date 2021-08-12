#include <stdio.h>
#include "holberton.h"
#include "main.h"

/**
 * main - Entry point
 * Prints
 * @void: parameter
 * Return: Always success (0)
 */

int main(void)
{
int a;

for (a = 1; a <= 100; a++)
{
if ((a % 3) == 0 && (a % 5) != 0)
{
printf("Fizz ");
}
else if ((a % 3) != 0 && (a % 5) == 0)
{
if (a == 100)
{
printf("Buzz");
}
else
{
printf("Buzz ");
}
}
else if ((a % 3) == 0 && (a % 5) == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", a);
}
}
printf("\n");
return (0);
}
