#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * head: pointer to the head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
    listint_t *t;

    /* Iterate through  the list and free each node */
    while (head != NULL)
    {
        t = head;
        head = head->next;
        free(t);
    }
}
i
