#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)  /* Check if exactly two arguments are provided */
	{
		printf("Error\n");
		return (1);
	}

	/* Convert arguments from strings to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Perform multiplication */
	result = num1 * num2;

	/* Print result followed by a newline */
	printf("%d\n", result);

	return (0);
}

