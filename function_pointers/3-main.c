#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point for a simple calculator program.
 * @argc: Number of command-line arguments.
 * @argv: Array of argument strings.
 *
 * Description: Performs an arithmetic operation on two integers.
 * The operator is specified as a command-line argument and the
 * corresponding function is obtained via get_op_func. The program
 * uses atoi to convert the numbers and prints the result followed by
 * a newline.
 *
 * Return: 0 on success. Exits with:
 *         98 if the argument count is incorrect,
 *         99 if the operator is invalid,
 *         100 if division or modulo by zero is attempted.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = op_func(num1, num2);
	printf("%d\n", result);
	return (0);
}

