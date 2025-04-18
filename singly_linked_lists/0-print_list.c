#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list  - Prints all the elements of a list_t list.
 *
 * @h: Pointer to the head node of the list. *
 * Return: The number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
