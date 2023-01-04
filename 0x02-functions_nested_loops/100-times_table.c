#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print times table 0-n
 * @n: where to stop
 */

void print_times_table(int n)
{
	int i, j, p;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				p = i * j;
				if (j == 0)
				{
					printf("%d", p);
				}
				else
				{
					if (p < 10)
					{
						printf(",");
						printf("   ");
					}
					else if (p > 10 && p < 100)
					{
						printf(",  ");
					}
					else
					{
						printf(", ");
					}
					printf("%d", p);
				}
			}
			printf("\n");
		}
	}
}

