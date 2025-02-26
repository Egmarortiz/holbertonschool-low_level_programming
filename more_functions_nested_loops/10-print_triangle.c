#include <unistd.h>
#include "main.h"

/**
 * print_triangle - Function description
 *
 * @size: Parameter description (if applicable)
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (row = 1; row <= size; row++)
	{
		for (space = 1; space <= size - row; space++)
		{
			_putchar(' ');

		}
		for (hash = 1; hash <= row; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
