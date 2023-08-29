#include "lists.h"

/**
 * listint_len - returns the numbers of elements in a linked listint_t int
 * @h: A pointer to the head of the list_t list
 *
 * Return: Number of Elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
