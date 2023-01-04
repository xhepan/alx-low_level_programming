#include "main.h"

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

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
