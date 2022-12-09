#include <stdio.h>
#include <string.h>
/**
 * main -Print alphabet in lowercase
 *
 * Return: 0 if successful
 */
int main(void)
{
	char alph[50] = {"abcdefghijklmnopqrstuvwxyz"};
	int i;

	i=0;

	while (i < strlen(alph))
	{
		putchar(alph[i]);
		i++;
	}
	
	return (0);
}
