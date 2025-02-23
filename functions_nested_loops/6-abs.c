#include <unistd.h>
#include "main.h"

/**
 * _abs - Function description
 *
 * @n: Parameter description (if applicable)
 *
 * Return: Always 0 
 */

int _abs(int n)
{
	if (n < 0)
		return -n;
	return n;
}
