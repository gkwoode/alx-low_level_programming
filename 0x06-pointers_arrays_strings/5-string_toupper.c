#include "main.h"

/**
 * string_toupper - function that changes
 * all lowercase letters of a string to uppercase
 * @str: input string
 * Return: 0
 */

char *string_toupper(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 97 && str[a] <= 122)
			str[a] = str[a] - 32;
		a++;
	}

	return (str);
}
