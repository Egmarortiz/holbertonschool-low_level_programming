#include <unistd.h>
#include "main.h"

/**
 * _isdigit  - Function description
 *
 * @c: Parameter description (if applicable)
 *
 * Return: Always 0 and 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else 
		return (0);
}
