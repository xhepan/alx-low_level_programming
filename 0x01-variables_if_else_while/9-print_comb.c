#include <stdio.h>
#include <string.h>
/**
 * main -Print alphabet in lowercase
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar('0' + i);
    putchar(',');
    putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
