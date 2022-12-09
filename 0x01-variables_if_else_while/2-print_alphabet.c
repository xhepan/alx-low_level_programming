#include <stdio.h>
#include <string.h>
/**
 * main -Print alphabet in lowercase
 *
 * Return: 0 if successful
 */
int main(void)
{
	char alph[30] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
	int i;

	i=0;

	while (i < strlen(alph))
	{
		putchar(alph[i]);
		i++;
	}
	
	return (0);
}
