#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks if character is alphabet
 * @c: character to be chacked
 *
 * Return: 1 if true
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
