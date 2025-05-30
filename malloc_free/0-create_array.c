#include <unistd.h>
#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Function description
 *
 * @size: Parameter description (if applicable)
 * @c: Parameter description (if applicable)
 *
 * Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size <= 0)
		return (NULL);

	array = (char *) malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);

}
