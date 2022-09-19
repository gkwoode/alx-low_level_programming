#include "main.h"

/**
 * _strlen - Checks the length of string
 * @s: string input to check
 * Return: Length of string
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; ++s)
		++length;

	return (length);
}
