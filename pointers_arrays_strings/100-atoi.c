#include <unistd.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: the string to be converted.
 *
 * Description: The function processes all the '-' and '+' characters
 * preceding the number to determine its sign. Then it converts the
 * subsequent digits into an integer. If no digits are found, it returns 0.
 *
 * Return: the integer value represented by the string.
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;

	/* Process characters until a digit is encountered.
	   Take into account all '+' and '-' signs before the number.
	   */
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			break;
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
		
		i++;
	}

	/* Convert digit characters into an integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}

