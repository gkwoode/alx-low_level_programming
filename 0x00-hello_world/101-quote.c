#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: Print same thing
 * Return: 1
 */
int main(void)
{
	char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, ch, sizeof(ch));
	return (1);
}
