#include "lists.h"

/**
 * get_dnodeint_at_index - Get the node at a specific index in a doubly linked list
 * @head: Pointer to the head of the doubly linked list
 * @index: Index of the node to retrieve
 *
 * Return: Pointer to the node at the given index, or NULL if it doesn't exist
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
		if (index == count)
		{
			return (head);
		}

		head = head->next;
		count++;
	}

	return (NULL);
}

