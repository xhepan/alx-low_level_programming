#include "main.h"

/**
 * times_table - print times table 0-9
 */

void times_table(void)
{
	int i,j,p;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			p = i * j;
			_putchar(p + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
