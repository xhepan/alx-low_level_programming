#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of matrix diagonals
 * @a: matrix
 * @size: size of matrix
 *
 * Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
	int sum, i, j;

	sum = 0;
	i = 0;
	while (i < size * size)
	{
		sum = sum + a[i];
		i = i + (size + 1);
	}
	printf("%d, ", sum);
	sum = 0;
	i = size;
	j = size;
	while (i < size * size)
	{
		sum = sum + a[i - 1];
		i = i + (j-1);
	}
	printf("%d\n", sum);
}
