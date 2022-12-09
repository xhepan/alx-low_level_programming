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

	alph = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
	i=0;

	while (i < strlen(alph))
	{
		putchar(alph[i]);
		i++;
	}
	
	return (0);
}
