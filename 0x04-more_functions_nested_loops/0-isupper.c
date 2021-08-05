#include "holberton.h"

/**
 * _isupper - Entry point
 * Checks for upper case
 * @c: Parameter
 * Return : Interger
 */

int _isupper(int c)
{
  int a;
  
  if (c > 65 && c < 91)
    {
      a = 1;
    }
  else if (c > 96 && c < 123)
    {
      a = 0;
    }
  return (a);
}
