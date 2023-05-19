#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given index in a doubly linked list
 * @head: pointer to the head of the doubly linked list
 * @index: index of the node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	current = *head;
	while (current)
	{
		if (count == index)
		{
			if (current == *head)
				*head = current->next;

			if (current->next != NULL)
				current->next->prev = current->prev;

			if (current->prev != NULL)
				current->prev->next = current->next;

			free(current);
			return (1);
		}

		count++;
		prev = current;
		current = current->next;
	}

	return (-1);
}

