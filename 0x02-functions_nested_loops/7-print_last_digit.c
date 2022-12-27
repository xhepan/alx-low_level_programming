#include "main.h"

/**
 * print_last_digit - prints last didgit of given number
 * @n: number given
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	_putchar('0' + ld);
	return (ld);
}
