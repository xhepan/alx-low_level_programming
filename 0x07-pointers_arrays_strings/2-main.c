#include "main.h"
#include <string.h>

/**
 * main - check the code
 *
 * Return: always 0.
 */
int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
