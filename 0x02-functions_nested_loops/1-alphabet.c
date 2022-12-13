#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_alphabet - uses _putchar to print the alphabet in lowercase
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
