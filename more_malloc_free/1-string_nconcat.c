#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes from s2 to concatenate.
 *
 * Return: pointer to newly allocated concatenated string,
 *         or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Manually calculate the length of s1 */
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	/* Manually calculate the length of s2 */
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	/* Use the entire s2 if n is greater than or equal to s2's length */
	if (n >= len2)
		n = len2;

	concat = malloc(len1 + n + 1);
	if (concat == NULL)
		return (NULL);

	/* Copy s1 into concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy n bytes of s2 into concat */
	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[len1 + n] = '\0';

	return (concat);
}

