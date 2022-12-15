#include <stdio.h>

/**
 * main - print numbers and fizz buzz
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 100)
		{
			if (i % 3 == 0 && i % 5 != 0)
			{
				printf("Fizz ");
			}
			else if (i % 3 != 0 && i % 5 == 0)
			{
				printf("Buzz ");
			}
			else if (i % 3 == 0 && i % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("%d ", i);
			}
		}
		else
		{
			printf("Buzz");
		}
	}
	printf("\n");
	return (0);
}
