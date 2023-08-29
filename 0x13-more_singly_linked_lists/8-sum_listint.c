#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: A pointer to the head of the listint_t list
 *
 * Return: if list is empty - 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

}
