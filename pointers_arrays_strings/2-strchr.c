#include <unistd.h>
#include <stddef.h>
#include "main.h"

/**
 * *_strchr - Function description
 *
 * @s: Parameter description (if applicable)
 * @c: Parameter description (if applicable)
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;

	}
	if (c == '\0')
		return (s);

	return (NULL);

}
