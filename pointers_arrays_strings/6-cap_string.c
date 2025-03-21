#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: the string to modify.
 * Return: pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char sep[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= ('a' - 'A');

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j] && s[i + 1] != '\0')
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= ('a' - 'A');
				break;
			}
		}
	}
	return (s);
}

