#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character in string
 * @str: string to print
 */

void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
