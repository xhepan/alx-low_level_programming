#include "main.h"
#include <string.h>

/**
 * _strpbrk - locates first occurence of a byte in string
 * @s: string
 * @accept: byte
 *
 * Return: pointer to memory
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
