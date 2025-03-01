#include <unistd.h>
#include "main.h"

/**
 * _strlen - Function description
 *
 * @s: Parameter description (if applicable)
 *
 * Return: Always 0
 */
 
int _strlen(char *s)
{
	int i = 0;

    while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
