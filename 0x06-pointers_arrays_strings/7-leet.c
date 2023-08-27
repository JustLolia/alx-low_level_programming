#include "main.h"

/**
 * leet - A function encodes a string into 1337
 * @str: set of strings to be encoded
 * Return: Encoded string
 */

char *leet(char *str)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[j] == c[j])
			{
				str[i] = d[j];
			}
		}
	}

	return (str);
}
