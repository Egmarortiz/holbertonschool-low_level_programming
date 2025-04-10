#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 characters.
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}

