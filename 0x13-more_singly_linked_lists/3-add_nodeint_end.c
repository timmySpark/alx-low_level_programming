#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: A pointer to the address of the head of the listint_t list
 * @n: The integer for the new node
 *
 * Return: if Function fails - NULL
 *            Otherwise - The Address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *end_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (*head == NULL)
		*head = new_node;
	else
	{
		end_node = *head;
		while (end_node->next != NULL)
			end_node = end_node->next;
		end_node->next = new_node;
	}
	return (*head);
}
