#include <unistd.h>
#include "main.h"

/**
 * is_prime_helper - Function description
 *
 * @n: Parameter description (if applicable)
 * @i: Parameter description (if applicable)
 *
 * Return: Always 0
 */

int is_prime_helper(int n, int i)
{
	if (i * i > n)
		return 1;
	if (n % i == 0)
		return 0;
	return is_prime_helper(n, i + 1);
}

/**
 * is_prime_number - Function description
 *
 * @n: Parameter description (if applicable)
 *
 * Return: Always 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime_helper(n, 2));

}
