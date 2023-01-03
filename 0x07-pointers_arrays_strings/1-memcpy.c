#include "main.h"
#include <string.h>

/**
 * _memcpy - uses memcpy() to copy memory area
 * @dest: copy to
 * @src: copy from
 * @n: no. of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
