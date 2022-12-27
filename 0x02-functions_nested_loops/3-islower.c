#include "main.h"
#include <ctype.h>

/**
 * _islower - checks if character is lowercase
 * @c: character to be chacked
 *
 * Return: 1 if true
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
