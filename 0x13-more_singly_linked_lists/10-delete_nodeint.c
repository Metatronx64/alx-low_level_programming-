#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given position in a listint_t linked list.
 * @head: Pointer to the pointer to the head node of the linked list.
 * @index: Index of the node to be deleted, starting from 0.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i = 0;
    listint_t *current, *prev;

    /* Return -1 if the list is empty */
    if (*head == NULL)
    {
        return (-1);
    }

    
    if (index == 0)
    {
        current = *head;
        *head = (*head)->next;
        free(current);
        return (1);
    }

    /* Go through the list until the index-th node is found */
    current = *head;
    while (current != NULL && i < index)
    {
        prev = current;
        current = current->next;
        i++;
    }

    /* Return -1 if the index is out of bounds */
    if (i < index || current == NULL)
    {
        return (-1);
    }

    /* Delete the index-th node */
    prev->next = current->next;
    free(current);

    return (1);
}

