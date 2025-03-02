#include "main.h"

/**
 * string_toupper - converts all lowercase letters in a string to uppercase.
 * @s: string to modify.
 * Return: pointer to the modified string.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= ('a' - 'A');
		i++;
	}
	return (s);
}

