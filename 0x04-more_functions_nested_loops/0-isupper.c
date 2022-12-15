#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isupper - checks if character is uppercase.
 *
 * Return: 1 if uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
