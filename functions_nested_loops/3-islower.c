#include <unistd.h>
#include "main.h"

/**
 * _islower - checks for lowercase
 *
 *@c:  checks lowercase
 *
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
