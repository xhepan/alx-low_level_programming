#include <stdio.h>
/**
 * main -Print alphabet in lowercase
 *
 * Return: 0 if successful
 */
int main(void)
{
	char alph[30]; 
	int i;

	alph = "abcdefghijklmnopqrstuvwxyz";
	i=0;

	while (i < strlen(alph))
	{
		putchar(alph[i]);
		i++;
	}
	
	return (0);
}
