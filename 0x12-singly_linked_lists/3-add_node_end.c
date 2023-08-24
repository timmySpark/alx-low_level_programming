#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	list_t *new_node, *node_end;
	int i = 0;

	new_node = malloc(sizeof(list_t));

	if (str == NULL || new_node == NULL)
		return (NULL);

	dup = strdup(str);

	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[i])
		i++;

	new_node->str = dup;
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		node_end = *head;

		while (node_end->next != NULL)
			node_end = node_end->next;
		node_end->next = new_node;

	}

	return (new_node);
}
