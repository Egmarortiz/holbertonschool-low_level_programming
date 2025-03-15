#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicates a string using malloc.
 * @str: pointer to the source string.
 *
 * Return: pointer to the duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
	char *dup;
	size_t len = 0, i;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dup[i] = str[i];
	return (dup);
}
