#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at a specific index in a doubly linked list.
 * @h: The head of the doubly linked list.
 * @idx: The index at which to insert the new node.
 * @n: The value to be added to the new node.
 *
 * Return: The new node upon successful insertion, or NULL if insertion fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current, *previous;
	unsigned int count = 0;

	if (*h == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	current = *h;
	while (current)
	{
		if (idx == count)
		{
			new->n = n;
			previous = current->prev;
			new->next = current;
			new->prev = previous;
			previous->next = new;
			return (*h);
		}
		current = current->next;
		count++;
	}

	return (NULL);
}

