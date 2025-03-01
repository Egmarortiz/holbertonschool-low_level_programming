#include <unistd.h>
#include "main.h"

/**
 * puts2 - Function description
 *
 * @str: Parameter description (if applicable)
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int i = 0;

	/* Loop through the string until the null terminator */
	while (str[i] != '\0')
	{
		/* Print character at even index (0, 2, 4, ...) */
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
