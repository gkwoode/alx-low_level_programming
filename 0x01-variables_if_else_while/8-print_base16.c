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
	char i, j;

	for (i = 0; i < 10; i++)
	{
		putchar (i + '0');
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar (j);
	}
	
	putchar('\n');
	return (0);
}
