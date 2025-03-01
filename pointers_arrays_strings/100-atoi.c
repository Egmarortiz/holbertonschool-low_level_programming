#include <unistd.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: the string to be converted.
 *
 * Description: Processes all the '-' and '+' signs encountered
 * before the number. It then converts the following digit characters
 * into an integer, accumulating the result in a way that avoids overflow
 * when the input represents INT_MIN. If no digits are found, returns 0.
 *
 * Return: the integer value represented by the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	/* Skip non-digit characters, processing signs as we go */
	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			break;  /* Found first digit */
		s++;
	}

	/* Accumulate digits, updating result in a sign-aware manner */
	while (*s && (*s >= '0' && *s <= '9'))
	{
		int digit = *s - '0';
		if (sign > 0)
			result = result * 10 + digit;
		else
			result = result * 10 - digit;
		s++;
	}

	return result;
}

