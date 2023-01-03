#include "main.h"
#include <string.h>

/**
 * _strchr - locates char in string using strchr()
 * @s: the string
 * @c: the char to locate
 *
 * Return: pointer to char or NULL.
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
