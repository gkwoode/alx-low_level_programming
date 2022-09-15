#include <stdio.h>
#include "main.h"

/**
 * main - prime numbers
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long large = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			large = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", large);
	return (0);
}

