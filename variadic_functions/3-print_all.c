#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/* Helper function prototypes */
void print_char(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);
void print_string(va_list ap);

/**
 * print_all - prints anything.
 * @format: constant string with a list of types.
 *
 * Description: The format string may contain the following characters:
 *              c: char
 *              i: integer
 *              f: float
 *              s: char * (if NULL, print (nil))
 *              Any other character is ignored.
 * Restrictions: No for, else, goto, ternary, or do...while loops;
 * use at most 2 while loops, 2 if statements, and declare at most 9 variables.
 * A new line is printed at the end.
 */
void print_all(const char * const format, ...)
{
	va_list args;      /* Variable 1 */
	int i = 0;         /* Variable 2: index into format */
	int j = 0;         /* Variable 3: index into mapping array */
	char *sep = "";    /* Variable 4: separator string */

	/* Define a structure to map a type character to its print function */
	typedef struct print
	{
		char t;
		void (*f)(va_list);
	} print_t;
	print_t funcs[] = {  /* Variable 5: mapping array */
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	if (!format) /* First if statement: check if format is NULL */
	{
		printf("\n");
		return;
	}
	va_start(args, format);
	while (format[i]) /* First while loop: iterate over format */
	{
		j = 0;
		while (funcs[j].t) /* Second while loop: search mapping array */
		{
			if (format[i] == funcs[j].t) /* Second if statement: type match */
			{
				printf("%s", sep);
				funcs[j].f(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

