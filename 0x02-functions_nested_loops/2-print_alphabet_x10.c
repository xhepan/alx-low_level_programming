#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_alphabet - uses _putchar to print the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	char c;
  int i;

  for (i = 0; i < 10; i++)
  {
    for (c = 'a'; c <= 'z'; c++)
    {
      _putchar(c);
    }
	  _putchar('\n');
  }
  _putchar('\n');
}
