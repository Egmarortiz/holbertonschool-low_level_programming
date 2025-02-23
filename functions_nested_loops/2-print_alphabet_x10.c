#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int count =  0;

	while (count < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		count++;
	}
}
