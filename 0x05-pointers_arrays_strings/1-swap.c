#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: first var
 * @b: second var
 */

void swap_int(int *a, int *b)
{
	int *c;

	*c = *a;
	*a = *b;
	*b = *c;
}
