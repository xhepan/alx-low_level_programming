#include "main.h"
#include <string.h>

/**
 * _strncpy - copies string
 * @dest: string 1
 * @src: string 2
 * @n: no. of bytes
 *
 * Return: pointer to resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
