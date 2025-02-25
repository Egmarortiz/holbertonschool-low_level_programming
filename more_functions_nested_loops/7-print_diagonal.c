#include <unistd.h>
#include "main.h"

/**
 * print_diagonal - Function description
 *
 * @n: Parameter description (if applicable)
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i;

	if (n >= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
		_putchar('\\'); 
	_putchar('\n');
}
