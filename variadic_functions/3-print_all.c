#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a char.
 * @ap: va_list.
 */
void print_char(va_list ap)
{
	printf("%c", (char)va_arg(ap, int));
}

/**
 * print_int - prints an int.
 * @ap: va_list.
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints a float.
 * @ap: va_list.
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints a string.
 * @ap: va_list.
 */
void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);
	char *arr[2];

	arr[0] = "(nil)";
	arr[1] = s;
	printf("%s", arr[s != 0]);
}

/**
 * print_all - prints anything.
 * print - words
 * @format: list of types.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *sep = "";
struct print
{
    char t;
    void (*f)(va_list);
};

struct print funcs[] = {
    {'c', print_char},
    {'i', print_int},
    {'f', print_float},
    {'s', print_string},
    {0, NULL}
};

	if (!format)
	{
		printf("\n");
		return;
	}
	va_start(args, format);
	while (format[i])
	{
		j = 0;
		while (funcs[j].t)
		{
			if (format[i] == funcs[j].t)
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

