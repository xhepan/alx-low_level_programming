#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long int a, b, c, i;
	
	a = 1;
	b = 2;
	printf("%ld, %ld, ", a, b);
	for (i = 2; i < 50; i++)
	{
		c = a + b;
		if (i < 50 - 1)
		{
			printf("%ld, ", c);
		}
		else
		{
			printf("%ld\n", c);
		}
		a = b;
		b = c;
	}
	return (0);
}

