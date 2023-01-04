#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates strings differently
 * @dest: string 1
 * @src: string 2
 * @n: no. of bytes
 *
 * Return: pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
