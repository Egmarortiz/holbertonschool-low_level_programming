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
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything.
 * @format: constant string with list of types.
 */
void print_all(const char * const format, ...)
{
	va_list args;   /* Variable 1 */
	int i = 0;      /* Variable 2 */
	int j = 0;      /* Variable 3 */
	char *sep = ""; /* Variable 4 */

	/* Mapping structure and array */
	struct print
	{
		char t;
		void (*f)(va_list);
	};

	struct print funcs[] = { /* Variable 5 */
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

