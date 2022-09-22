#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @str: string
 * Return: @str
 */

char *rot13(char *str)
{
	int a, b;
	char src[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char des[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; src[b] != '\0'; b++)
		{
			if (str[a] == src[b])
			{
				str[a] = des[b];
				break;
			}
		}
	}

	return (str);
}
