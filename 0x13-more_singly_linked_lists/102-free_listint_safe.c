#include "lists.h"


/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to the address of the head of the listint_t list
 *
 * Return: The size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = loop_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}

/**
 * loop_listint_count - Counts the number of unique nodes in
 *                                     a looped listint_t linked list
 * @head: A pointer to the head of the listint_t to check
 *
 * Return: If the list is not looped - 0
 *         Otherwise - the number of unique nodes in the list
 */


size_t loop_listint_count(listint_t *head)
{
	listint_t *monkey, *snake;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	monkey = head->next;
	snake = (head->next)->next;

	while (snake)
	{
		if (monkey == snake)
		{
			monkey = head;
			while (monkey != snake)
			{
				nodes++;
				monkey = monkey->next;
				snake = snake->next;
			}

			monkey = monkey->next;
			while (monkey != snake)
			{
				nodes++;
				monkey = monkey->next;
			}

			return (nodes);
		}

		monkey = monkey->next;
		snake = (snake->next)->next;
	}

	return (0);
}

