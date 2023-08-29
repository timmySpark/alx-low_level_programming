#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in  a listint_t linked list
 * @head: A pointer to the head of the listint_t list
 *
 * Return: If there is no loop - NULL
 *         Otherwise - the address of the node where the loop starts
 */


listint_t *find_listint_loop(listint_t *head)
{
	listint_t *monkey, *snake;

	if (head == NULL || head->next == NULL)
		return (NULL);

	monkey = head->next;
	snake = (head->next)->next;

	while (snake)
	{
		if (monkey == snake)
		{
			monkey = head;

			while (monkey != snake)
			{
				monkey = monkey->next;
				snake = snake->next;
			}

			return (monkey);
		}

		monkey = monkey->next;
		snake = (snake->next)->next;
	}

	return (NULL);
}
