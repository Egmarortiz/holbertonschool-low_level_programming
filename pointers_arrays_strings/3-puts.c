#include <unistd.h>
#include "main.h"

/**
 * _puts - Function description
 *
 * @str: Parameter description (if applicable)
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
