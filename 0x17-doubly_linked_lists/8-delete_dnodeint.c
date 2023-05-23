#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a specific index in a doubly linked list.
 * @head: The head of the linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 on success, -1 if the list is empty or deletion fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *previous;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	current = *head;
	while (current)
	{
		if (index == count)
		{
			previous = current->prev;
			previous->next = current->next;

			if (current->next != NULL)
				current->next->prev = previous;

			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}

	return (-1);
}

