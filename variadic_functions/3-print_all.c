#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

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
	/* floats are promoted to double in variadic functions */
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints a string.
 * @ap: va_list containing the string.
 */
void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);
	char *arr[2];

	arr[0] = "(nil)";
	arr[1] = s;
	/* Use (s != 0) as index: if s is NULL, (s != 0) is 0; otherwise 1 */
	printf("%s", arr[s != 0]);
}

/**
 * print_all - prints anything.
 * @format: constant string with list of types.
 *
 * Valid types:
 *   c: char
 *   i: integer
 *   f: float
 *   s: string (if NULL, prints (nil))
 * Any other character is ignored.
 *
 * Restrictions:
 *   - Do not use for, goto, else, else if, ternary, or do...while loops.
 *   - Use only 2 while loops and 2 if statements in this function.
 *   - Declare at most 9 variables.
 *   - Print a new line at the end.
 */
void print_all(const char * const format, ...)
{
	va_list args;    /* variable 1 */
	int i = 0;       /* variable 2: index into format */
	int j = 0;       /* variable 3: index into mapping array */
	char *sep = "";  /* variable 4: separator string */

	/* Define mapping structure */
	typedef struct print
	{
		char t;
		void (*f)(va_list);
	} print_t;
	print_t funcs[] = { /* variable 5: mapping array */
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	if (!format) /* if statement 1 */
	{
		printf("\n");
		return;
	}
	va_start(args, format);
	while (format[i]) /* while loop 1 */
	{
		j = 0;
		while (funcs[j].t) /* while loop 2 */
		{
			if (format[i] == funcs[j].t) /* if statement 2 */
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

