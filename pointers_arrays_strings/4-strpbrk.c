#include <unistd.h>
#include <stddef.h>
#include "main.h"

/**
 * *_strpbrk - Function description
 *
 * @s: Parameter description (if applicable)
 * @accept: Parameter description (if applicable)
 * @a: Parameter description (if applicable)
 *
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (char *s);
			a++;
		}
		s++;
	}
	return (NULL);
}
