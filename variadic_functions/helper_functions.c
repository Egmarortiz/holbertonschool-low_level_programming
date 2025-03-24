#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

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

