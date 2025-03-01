#include <unistd.h>
#include "main.h"

/**
 * swap_int - Function description
 *
 * @a Parameter description (if applicable)
 *
 * @b: Parameter description (if applicable)
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
