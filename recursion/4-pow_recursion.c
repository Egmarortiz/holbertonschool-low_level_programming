#include <unistd.h>
#include "main.h"

/**
 * function_name - Function description
 *
 * @x: Parameter description (if applicable)
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
