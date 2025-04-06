#include "lists.h"
#include <stdlib.h>
#include <string.h>  /* Needed for strdup */

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to pointer to the head node.
 * @str: string to duplicate.
 *
 * Return: address of the new element, or NULL if allocation fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	unsigned int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Manually compute the length of str */
	while (str[length] != '\0')
		length++;
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}

