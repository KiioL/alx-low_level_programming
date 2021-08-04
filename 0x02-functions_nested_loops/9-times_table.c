#include <stdio.h>
#include "main.h"

/**
 * times_table - Entry Point
 * Prints 9 times table
 * @void: lowercase version of the parameter
 * Return: Null
 */

void times_table(void)
{

  int a,b,c;

  for (a = 0;a <=9;a++)
    {
      for(b = 0;b <=9;b++)
	{
	  c = a * b;

	  if (c < 10)
	    {
	      _putchar(c + '0');
	      _putchar(44);
	      _putchar(32);
	      _putchar(32);
	    }
	  else
	    {
	      _putchar((c / 10) + '0');
	      _putchar((c % 10) + '0');
	      _putchar(44);
	      _putchar(32);
	      _putchar(32);
	    }
	}
      _putchar('\n');
    }	 
}


