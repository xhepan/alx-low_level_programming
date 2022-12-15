#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * more_numbers - uses _putchar to print the numbers 0-14
 */
void more_numbers(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			_putchar(c);
		}
		for (c = '0'; c <= '4'; c++)
		{
			_putchar('1' + c);
		}
		_putchar('\n');
	}
}
