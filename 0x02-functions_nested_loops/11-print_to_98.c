#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry Point
 * prints numbers from/to 98
 * @n: integer parameter
 * Return: Interger
 */

void print_to_98(int n)
{
  if (n < 98)
    {
      
      for (; n <= 99; n++)
	{
	  printf("%d", n);
	  if (n != 98)
	    {
	      printf(", ");
	    }
	}
    }
  else if (n == 98)
    {
      printf("%d", n);
    }
  else
    {
      
      for (; n >= 99; n--)
	{
	  printf("%d", n);
	  if (n != 98)
	    {
	      printf(", ");
	    }
	}
    }
}


