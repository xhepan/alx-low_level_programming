#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_numbers - uses _putchar to print the alphabet in lowercase
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
