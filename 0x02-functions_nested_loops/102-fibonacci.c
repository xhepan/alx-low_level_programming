#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int a, b, c, i;
	
	a = 1;
	b = 2;
	printf("%d, %d, ", a, b);
	for (i = 2; i <= 50; i++)
	{
		c = a + b;
		if (i < 50)
		{
			printf("%d, ", c);
		}
		else
		{
			printf("%d\n", c);
		}
		a = b;
		b = c;
	}
	return (0);
}

