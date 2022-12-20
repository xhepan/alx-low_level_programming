#include "main.h"
#include <string.h>

/**
 * rev_string - reverses string
 * @s: string
 */

void rev_string(char *s)
{
	int i;
	int len;
	char str[10];
	int j;

	len = strlen(s);
	for (i = 0; i < len/2; i++)
	{
		j = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = j;
	}
}
