#include "variadic_functions.h"
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
	char *arr[2];

	arr[0] = "(nil)";
	arr[1] = s;
	printf("%s", arr[s != NULL]);}

	/**
	 * print_all - prints anything.
	 * @format: constant string with list of types.
	 *
	 * Description: The format string may contain the following characters:
	 *              c: char
	 *              i: integer
	 *              f: float
	 *              s: string (if NULL, prints (nil))
	 * Any other character is ignored.
	 *
	 * Restrictions:
	 *   - No for, else, else if, goto, ternary, or do...while loops/statements are used.
	 *   - Use only 2 while loops and 2 if statements in this function.
	 *   - Declare at most 9 variables.
	 *   - A new line is printed at the end.
	 */
void print_all(const char * const format, ...)
{
	va_list args;    /* variable 1 */
	int i = 0;       /* variable 2: index for format string */
	int j = 0;       /* variable 3: index for mapping array */
	char *sep = "";  /* variable 4: separator string */

	/* Mapping structure definition */
	typedef struct print
	{
		char t;
		void (*f)(va_list);
	} print_t;
	/* Mapping array: variable 5 (an array of print_t) */
	print_t funcs[] = {
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
	while (format[i]) /* while loop 1: iterate over format string */
	{
		j = 0;
		while (funcs[j].t) /* while loop 2: search mapping array */
		{
			if (format[i] == funcs[j].t) /* if statement 2: matching type found */
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

