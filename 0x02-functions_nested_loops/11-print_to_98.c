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
  int x;
  if (n < 98)
    {
      for (x = 98; x <= n; x++)
	{
	  printf("%d", x);
	  if (x != 98)
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
      for (x = 98; x >= n; x--)
	{
	  printf("%d", x);
	  if (x != 98)
	    {
	      printf(", ");
	    }
	}
    }
}


