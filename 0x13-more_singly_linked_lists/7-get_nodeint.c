#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * head- Pointer to the head node of the linked list.
 *index-Index of the node to be returned, starting from 0.
 *
 * Return: Pointer to the nth node of the list, or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;
    listint_t *current = head;

    /* Go through  the linked list until the nth node is found */
    while (current != NULL && i < index)
    {
        current = current->next;
        i++;
    }

    /* Return NULL if the index is out of bounds */
    if (i < index || current == NULL)
    {
        return NULL;
    }

    /* Return a pointer to the nth indexed node */
    return (current);
}

