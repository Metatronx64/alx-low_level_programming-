#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a specific index in a doubly linked list
 * @h: Pointer to the head of the doubly linked list
 * @idx: Index at which the new node should be inserted
 * @n: Value of the new node
 *
 * Return: Pointer to the head of the modified doubly linked list, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *last, *back;
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

	last = *h;
	while (last != NULL)
	{
		if (idx == count)
		{
			new->n = n;
			back = last->prev;
			new->next = last;
			new->prev = back;
			back->next = new;
			return (*h);
		}

		last = last->next;
		count++;
	}

	return (NULL);
}

