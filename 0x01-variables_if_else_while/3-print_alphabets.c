#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	char alphab = 'A';

	while (alphab <= 'Z')
	{
		putchar(alphab);
		alphab++;

	putchar('\n');
	return (0);
}
