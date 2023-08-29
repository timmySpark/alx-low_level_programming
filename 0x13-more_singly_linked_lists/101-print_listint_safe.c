#include "lists.h"
#include <stdio.h>


/**
 * loop_listint_len - Counts the number of unique nodes
 *                      in a loop listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not loop - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t loop_listint_len(const listint_t *head)
{
	const listint_t *monkey, *snake;
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

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = loop_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
