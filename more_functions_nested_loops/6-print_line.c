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
	int j;

	if (n <= 0)
		_putchar('\n');  

	for (j = 0; j < n; j++)
		_putchar('_');
}
