#include <unistd.h>
#include "main.h"

/**
 * _strspn - Function description
 *
 * @s: Parameter description (if applicable)
 * @accept: Parameter description (if applicable)
 *
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	size_t count = 0;

	while (*s)
	{
		int found = 0;
		const char *a = accept;

		while (*a) {
			if (*s == *a) {
				found = 1;
				break;
			}
			a++;
		}

		if (!found)
			break;

		count++;
		s++;
	}

	return (count);
}
