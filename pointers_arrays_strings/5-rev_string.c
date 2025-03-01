#include "main.h"
#include <unistd.h>

/**
 * reverse_string - reverses a string in place.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
    int i = 0, j = 0;
    char temp;

    /* Find the length of the string */
    while (s[j] != '\0')
        j++;
    j--;  /* Set j to the index of the last character */

    /* Swap characters from the beginning and the end */
    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

