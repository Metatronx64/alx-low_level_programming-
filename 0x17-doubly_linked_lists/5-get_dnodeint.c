#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the node at a given index in a doubly linked list.
 * @head: The head of the doubly linked list.
 * @index: The index to search from.
 *
 * Return: The node at the given index, or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}

	return (NULL);
}

