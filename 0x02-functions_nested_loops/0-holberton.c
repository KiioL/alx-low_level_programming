#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include "holberton.h"
#include <string.h>

/**
 * Main - Entry Point
 * Prints Holberton
 * Return: Always 0 (Success)
 */
int main(void)
{
char* name = "Holberton";

int i;
 
for(i = 0; i < 9; i++)
{
_putchar(name[i]);
}
_putchar('\n');
return (0);
}
