#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a char.
 * @ap: va_list containing the char.
 */
void print_char(va_list ap)
{
	printf("%c", (char)va_arg(ap, int));
}

/**
 * print_int - prints an int.
 * @ap: va_list containing the int.
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints a float.
 * @ap: va_list containing the float.
 */
void print_float(va_list ap)
{
	/* float arguments are promoted to double in variadic functions */
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints a string.
 * @ap: va_list containing the string.
 */
void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: constant string with a list of types.
 * Description: Valid types:
 *              c: char
 *              i: integer
 *              f: float
 *              s: char * (if NULL, print (nil))
 *              Any other char is ignored.
 * Restrictions: No for, else, goto, ternary, or do...while; use at most 2 while loops, 2 if statements,
 * and declare at most 9 variables.
 */
void print_all(const char * const format, ...)
{
	va_list args;   /* Variable 1 */
	int i = 0;      /* Variable 2: index for format string */
	int j = 0;      /* Variable 3: index for mapping array */
	char *sep = ""; /* Variable 4: separator string */

	/* Declare a type mapping structure and an array of mappings */
	typedef struct print
	{
		char t;
		void (*f)(va_list);
	} print_t;
	print_t funcs[] = { /* Variable 5: mapping array */
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	if (!format) /* First if statement */
	{
		printf("\n");
		return;
	}
	va_start(args, format);
	while (format[i]) /* First while loop: iterate through format */
	{
		j = 0;
		while (funcs[j].t) /* Second while loop: iterate through mapping array */
		{
			if (format[i] == funcs[j].t) /* Second if statement */
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

