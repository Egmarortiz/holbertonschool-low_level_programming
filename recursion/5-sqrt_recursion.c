#include <unistd.h>
#include "main.h"

/**
 * sqrt_helper - description
 *
 * @n: Parameter description (if applicable)
 * @candidate: Parameter description (if applicable)
 *
 * Return: Always 0
 */

int sqrt_helper(int n, int candidate)
{
	if (candidate * candidate == n)
		return (candidate);
	if (candidate * candidate > n)
		return (-1);
	return (sqrt_helper(n, candidate + 1));
}

/**
 * _sqrt_recursion - Function description
 *
 * @n: Parameter description (if applicable)
 *
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));

}
