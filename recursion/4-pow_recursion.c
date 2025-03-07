#include <unistd.h>
#include "main.h"

/**
 * _pow_recursion - Function description
 *
 * @x: Parameter description (if applicable)
 * @y: Parameter description (if applicable)
 *
 * Return: Always 0
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));


}
