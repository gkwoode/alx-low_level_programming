#include "main.h"

/**
 * print_square - check for a digit
 * @n: number of _ to be printed
 * Return: void
 */

void print_square(int n)
{
	int i = 0, a;

	while (i < n && n > 0)
	{
		a = 0;
		while (a < n)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
