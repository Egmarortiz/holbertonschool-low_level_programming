#include <stdio.h>

/**
 * main - Prints the uppercase and lowercase alphabet
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
putchar(letter);
if (i == 25)
putchar('\n');
}
putchar('\n');

return (0);
}
