#include <unistd.h>
#include "main.h"

/**
 * _strcat - concatenates the src string to the dest string.
 * @dest: pointer to the destination buffer.
 * @src: pointer to the source string.
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then
 * adds a terminating null byte. It returns a pointer to the resulting string dest.
 *
 * Return: pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* Find the end of dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Append src to dest */
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	/* Add the terminating null byte */
	dest[i + j] = '\0';

	return (dest);
}
