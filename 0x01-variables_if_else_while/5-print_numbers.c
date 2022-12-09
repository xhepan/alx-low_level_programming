#include <stdio.h>
#include <string.h>
/**
 * main -Print alphabet in lowercase
 *
 * Return: 0 if successful
 */
int main(void)
{
	char alph[20] = {"0123456789"};
	int i, len;

	i = 0;
	len = strlen(alph);

	while (i < len)
	{
		putchar(alph[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
