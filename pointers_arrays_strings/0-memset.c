#include <unistd.h>
#include "main.h"

/**
 * *_memset - Function description
 *
 * @s: Parameter description (if applicable)
 * @b: Parameter description
 * @n: Parameter description
 *
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
