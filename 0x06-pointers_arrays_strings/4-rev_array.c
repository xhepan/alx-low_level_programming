#include "main.h"
#include <math.h>

/**
 * reverse_array - reverses elements of array
 * @a: array 
 * @n: no. of elements
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i;
	int j;

	if (n % 2 == 0)
	{
		j = n / 2;
	}
	else
	{
		j = ceil(n / 2);
	}
	for (i = 0; i < j; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
