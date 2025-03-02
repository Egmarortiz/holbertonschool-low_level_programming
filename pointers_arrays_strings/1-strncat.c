#include <unistd.h>
#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: pointer to the destination buffer.
 * @src: pointer to the source string.
 * @n: maximum number of bytes to use from src.
 *
 * Description: Appends
 *
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    int i = 0, j = 0;

    /* Find the end of the dest string */
    while (dest[i] != '\0')
        i++;

    /* Append at most n bytes from src to dest */
    while (j < n && src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }

    /* Add the terminating null byte */
    dest[i + j] = '\0';

    return (dest);
}

