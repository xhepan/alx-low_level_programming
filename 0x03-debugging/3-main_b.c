#include <stdio.h>
#include "main.h"

/**
 * main - checks code
 * Return: 0
 */

int main(void)
{
	int month, day, year;

	month = 2;
	day = 29;
	year = 2000;
	
	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}

