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
			int i = 0;

			while (i < 15)
				_putchar(i + '0'); 
			i++; 
		}

	_putchar('\n');
}
