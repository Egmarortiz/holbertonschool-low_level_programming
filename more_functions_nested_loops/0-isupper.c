#include <unistd.h>
#include "main.h"

/**
 * _isupper - Function description
 *
 * @c: Parameter description (if applicable)
 *
 * Return: Always 0 and 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
