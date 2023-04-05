#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list.
 * head- Pointer to the head node of the linked list.
 *
 * Return-The sum of all the data of the linked list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
    int sum = 0;

    /* Go through  the linked list and add up the data of each node */
    while (head != NULL)
    {
        sum += head->n;
        head = head->next;
    }

    return (sum);
}

