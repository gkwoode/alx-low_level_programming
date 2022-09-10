#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */

int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	char j = 'a';

	while (j <= 'f')
	{
		putchar(j);
		j++;
	}

	putchar('\n');
	return (0);
}
