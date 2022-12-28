#include "main.h"
#include <stdio.h>

/**
 * times_table - print times table 0-9
 */

void times_table(void)
{
	int i, j, p;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
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
					printf("  ");
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

