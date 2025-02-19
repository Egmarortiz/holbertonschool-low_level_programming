#include <stdio.h>

int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }
    putchar('\n');  /* Print a newline at the end */

    return 0;
}

