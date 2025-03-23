#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer.
 * @name: pointer to the name string.
 * @f: function pointer that takes a char pointer argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

