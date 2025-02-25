#include <unistd.h>
#include "main.h"

/**
 * print_square - Function description
 *
 * @size: Parameter description (if applicable)
 *
 * Return: Always 0
 */

void print_square(int size)
{
	int row, col; 

	if (size <= 0)
		_putchar('\n');
	for(row = 0; row < size; row++)
	{
		for (col = 0; col < row; col++)
		{
			_putchar('#');
		}
		_putchar('#'); 
		_putchar('\n');
	}
}
