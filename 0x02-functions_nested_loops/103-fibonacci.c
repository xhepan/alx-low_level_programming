#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long int a, b, c, i;
	long int sum;

	a = 1;
	b = 2;
	sum = b;
	for (i = 2; i < 4000000 - 1; i++)
	{
		c = a + b;
		if (c % 2 == 0)
		{
			sum = sum + c;
		}
		a = b;
		b = c;
		if (sum > 4000000)
		{
			break;
		}
	}
	printf("%ld\n", sum);
	return (0);
}

