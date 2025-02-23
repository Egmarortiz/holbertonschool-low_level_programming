#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 *               separated by a comma and a space, followed by a new line.
 * @n: starting number.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
		printf("98");
	}
	else
	{
		for (; n > 98; n--)
			printf("%d, ", n);
		printf("98");
	}
	printf("\n");
}
