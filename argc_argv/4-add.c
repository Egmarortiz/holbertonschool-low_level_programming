#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Checks if a string represents a positive number
 * @str: The string to check
 *
 * Return: 1 if the string is a valid positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
	int i = 0;

	if (str[i] == '\0')
		return (0);

	while (str[i])
	{
		if (!isdigit(str[i]))  /* Check if character is NOT a digit */
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - Adds positive numbers
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 if successful, 1 if invalid input is detected
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)  /* No numbers provided */
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))  /* Check for non-digit symbols */
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);  /* Convert valid string to integer and add */
	}

	printf("%d\n", sum);  /* Print the result */
	return (0);
}

