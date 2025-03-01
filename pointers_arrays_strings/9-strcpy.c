#include <unistd.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest,
 *          including the terminating null byte.
 * @dest: pointer to the destination buffer.
 * @src: pointer to the source string.
 *
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';  /* Ensure the destination string is null-terminated */
    return (dest);
}
