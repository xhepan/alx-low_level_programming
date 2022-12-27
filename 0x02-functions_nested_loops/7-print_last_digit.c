#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints last didgit of given number
 * @n: number given
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int ld;

	ld = abs(n % 10);
	_putchar(ld + '0');
	return (ld);
}
