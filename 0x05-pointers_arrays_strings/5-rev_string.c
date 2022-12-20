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
	j = 0;
	for (i = len - 1; i >= 0; i--)
	{
		str[j] = s[i];
		j++;
	}
	for (i = 0; i < strlen(str); i++)
	{
		s[i] = str[i];
	}
}
