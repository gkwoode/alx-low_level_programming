#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: string
 * Return: @str
 */

char *leet(char *str)
{
	int a;
	int b = 0;
	char replace[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (str[b])
	{
		for (a = 0; a < 10; a++)
		{
			if (str[b] == str[a])
				str[b] == str[a];
		}
		b++;
	}
	return (str);
}
