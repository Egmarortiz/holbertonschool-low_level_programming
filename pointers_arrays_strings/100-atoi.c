#include <unistd.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: the string to be converted.
 *
 * Description: The function scans through the string, processing all
 * the '-' and '+' signs until it finds the first digit. It then converts
 * the following digit characters into an integer. If no digits are found,
 * the function returns 0.
 *
 * Return: the integer value represented by the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	/* Process all characters until we encounter a digit or end of string */
	while (*s)
	{
		/* If the character is a '-' or '+', update the sign accordingly */
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			break;  /* Found the first digit; stop processing non-digit characters */
		s++;
	}

	/* Convert the digit characters into an integer */
	while (*s && (*s >= '0' && *s <= '9'))
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (sign * result);
}
