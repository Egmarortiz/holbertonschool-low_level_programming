#include <unistd.h>
#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: The string to be printed.
 *
 * If the number of characters is odd, it prints the last n characters,
 * where n = (length_of_the_string + 1) / 2.
 */
void puts_half(char *str)
{
    int len = 0, start, i;

    /* Calculate the length of the string */
    while (str[len] != '\0')
        len++;

    /* Determine the starting index for printing */
    if (len % 2 == 0)
        start = len / 2;
    else
        start = (len + 1) / 2;

    /* Print the second half of the string */
    for (i = start; i < len; i++)
        _putchar(str[i]);

    _putchar('\n');
}
