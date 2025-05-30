#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to pointer to the head node.
 * @str: string to duplicate.
 *
 * Return: address of the new element, or NULL if allocation fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;
	const char *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	temp = str;
	while (temp[len] != '\0')
		len++;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

