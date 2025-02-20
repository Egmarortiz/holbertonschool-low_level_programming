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
	int hex;

	for (hex = 0; hex <= 9; hex++)
		putchar('0' + hex);
			if (hex < 9)
			{
				putchar(',');
			}
	if (hex < 9)
	{
		putchar(' ');                               }
	putchar('\n');
	return (0);
}
