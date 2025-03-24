#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - associates a type with its print function.
 * @t: the type identifier.
 * @f: pointer to the print function.
 */
typedef struct print
{
	char t;
	void (*f)(va_list);
} print_t;

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
	char *str = va_arg(ap, char *);

	if (!str)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - prints anything based on the format.
 * @format: a constant string with the list of types.
 *
 * Description: format is composed of the characters:
 *              c: char, i: int, f: float, s: string.
 *              Any other character is ignored.
 *              Numbers are printed separated by a comma and space.
 *              A new line is printed at the end.
 * Restrictions:
 * - No for, goto, ternary operator, else, or do ... while loops.
 * - Maximum of 2 while loops and 2 if statements in this function.
 * - Maximum of 9 variables can be declared.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j;
	char *sep = "";
	print_t funcs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	if (!format) /* First if statement */
	{
		printf("\n");
		return;
	}
	va_start(ap, format);
	while (format[i]) /* Outer while loop */
	{
		j = 0;
		while (funcs[j].t) /* Inner while loop */
		{
			if (format[i] == funcs[j].t) /* Second if statement */
			{
				printf("%s", sep);
				funcs[j].f(ap);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}

