#include <unistd.h>
#include "main.h"

/**
 * function_name - Function description
 *
 * @x: Parameter description (if applicable)
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int num = 0;

	while (num > 10)
		_putchar(num);
	num++;
}
