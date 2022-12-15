#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks if character is a digit.
 * @c: character checked.
 *
 * Return: 1 if digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}

