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
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;

	}
	if (*s == '\0')
		return (s);

	return (NULL);

}
