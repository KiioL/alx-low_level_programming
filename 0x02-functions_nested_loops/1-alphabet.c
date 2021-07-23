#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include "holberton.h"
#include <string.h>

/**
 * main - Entry Point
 * Prints Holberton
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
  return(write(1,&c,1));
}


void print_alphabet(void)
{
char i;

for(i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
}

int main(void)
{
print_alphabet();
return (0);
}
