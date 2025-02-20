#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char abc;
{
for (abc = 'a'; abc <= 'z'; abc++)
if (abc == 'q' || abc == 'e')
continue;
putchar(abc);
}
putchar('\n');
return (0);
}
