#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 *               followed by a new line.
 * @a: pointer to the first element of the array.
 * @n: the number of elements of the array to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
