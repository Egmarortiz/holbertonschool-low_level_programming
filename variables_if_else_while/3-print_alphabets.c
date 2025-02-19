#include <stdio.h>

/**
 * main - Prints the uppercase and lowercase alphabet using only 3 putchar calls.
 *
 * Return: 0 Always.
 */
int main(void)
{
    int i;
    int letter;

    for (i = 0; i < 52; i++)
    {
        if (i < 26)
            letter = 'A' + i;
        else
            letter = 'a' + i - 26;
        putchar(letter);  /* 1st putchar call in the source code */
        if (i == 25)
            putchar('\n');  /* 2nd putchar call in the source code */
    }
    putchar('\n');  /* 3rd putchar call in the source code */

    return (0);
}
