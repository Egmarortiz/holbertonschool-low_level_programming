#include <unistd.h>
#include "main.h"

/**
 * print_rev - Function description
 *
 * @s: Parameter description (if applicable)
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* Print the string in reverse order */
	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	/* Print a newline at the end */
	_putchar('\n');
}
