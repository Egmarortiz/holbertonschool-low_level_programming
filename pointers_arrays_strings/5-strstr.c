#include <unistd.h>
#include <stddef.h>
#include "main.h"

/**
 * *_strstr - Function description
 *
 * @haystack: Parameter description (if applicable)
 * @needle: Parameter description (if applicable)
 *
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return(haystack);

	for(; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return(haystack);
	}
	return (NULL);
}
