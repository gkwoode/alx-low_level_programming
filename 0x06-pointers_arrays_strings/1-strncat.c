#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: pointer input
 * @src: pointer output
 * @n: most number of bytes from @src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b;

	while (dest[a])
		a++;

	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[a + b] = src[b];
	dest[a + b] = '\0';

	return (dest);
}
