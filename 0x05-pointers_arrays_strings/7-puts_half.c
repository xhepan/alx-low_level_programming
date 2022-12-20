#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of string
 * @str: string to print
 */

void puts_half(char *str)
{
	int i;
	int len;

	len = strlen(str);
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		int n;

		n = (len - 1) / 2;
		for (i = n + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
