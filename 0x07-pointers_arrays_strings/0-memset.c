#include "main.h"
#include <string.h>

/**
 * _memset - uses memset() to fill memory
 * @s: pointer to memory
 * @b: constant byte
 * @n: no. of bytes to fill
 *
 * Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
