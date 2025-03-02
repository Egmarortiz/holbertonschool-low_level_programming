#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: string to encode.
 * Return: pointer to the encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char repl[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = repl[j];
				break;
			}
		}
	}
	return (s);
}

