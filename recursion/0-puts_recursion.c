#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 *_puts_recursion - Function description
 *
 * @s: Parameter description (if applicable)
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_putchar('\n');
	_puts_recursion(s + 1);
}

