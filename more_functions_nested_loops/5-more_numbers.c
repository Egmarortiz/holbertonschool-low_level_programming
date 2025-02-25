#include <unistd.h>
#include "main.h"

/**
 * more_numbers - Function description
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int x = 0;

	while (x < 11)
	{
		int i;

		for (i = 0; i < 15; i++)
			_putchar(i + '0');
	}
	x++;

	_putchar('\n');
}
