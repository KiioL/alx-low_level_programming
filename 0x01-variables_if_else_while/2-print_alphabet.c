#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Prints Alphabet
 * Return: Always 0 (Success)
 */
int main (void){
int x;

for (x = 'A'; x <= 'Z'; x++)
{
  int lower_x = tolower(x);
  
  putchar(lower_x); }

return 0;

}