#include <unistd.h>
#include "main.h"

/**
 * print_line - Function description
 *
 * @n: Parameter description (if applicable)
 *
 * Return: Always 0
 */

void print_line(int n)
{
	char under = '_';
	
	if (n > 0)
		_putchar(under * n);
	else
		_putchar('\n');
}
