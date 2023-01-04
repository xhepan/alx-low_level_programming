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
	for (i = 0; i < size; i++)
	{
		sum = sum + a[i][i];
	}
	printf("%d, ", sum);
	sum = 0;
	j = size;
	for (i = 0; i < size; i++)
	{
		sum = sum + a[i][j];
		j--;
	}
	printf("%d\n", sum);
}
