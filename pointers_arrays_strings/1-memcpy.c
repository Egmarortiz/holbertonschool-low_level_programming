#include <unistd.h>
#include "main.h"

/**
 * function_name - Function description
 *
 * @x: Parameter description (if applicable)
 *
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}	
	return (dest);

}
