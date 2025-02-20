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

        for (abc = 'z'; abc <= 'a'; abc--)
	{
		putchar(abc);
	}
        putchar('\n');
        return (0);
}
