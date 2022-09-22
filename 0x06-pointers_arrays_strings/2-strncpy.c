#include "main.h"

/**
 * _strncpy: function that copies a string
 * @dest: pointer input
 * @src: poiter output
 * @n: maximum number of bytes to copied from src
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
