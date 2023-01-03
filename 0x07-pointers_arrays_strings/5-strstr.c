#include "main.h"
#include <string.h>

/**
 * _strstr - finds needle in haystack
 * @needle: to find
 * @haystack: string
 *
 * Return: pointer to needle.
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
