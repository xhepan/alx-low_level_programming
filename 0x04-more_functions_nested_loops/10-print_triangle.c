#include "main.h"

/**
 * print_triangle - prints triangle of size
 * @size: triangle size
 */
void print_triangle(int size)
{
	int i, j, k;

	k = 1;
	while (k <= size)
	{
		for (i = 0; i < size - k; i++)
		{
			_putchar(' ');
		}
		for (j = 0; j < k; j++)
		{
			_putchar('#');
		}
		k++;
	}
}
