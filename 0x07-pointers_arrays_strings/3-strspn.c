#include "main.h"
#include <string.h>

/**
 * _strspn - gets length of prefix substring
 * @s: the string
 * @accept: substring/bytes
 *
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
