#include "lists.h"

/**
 * reverse_listint - Reverses a list.
 * @head: pointer to the address of list_t list's head.
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *after, *before;
if (head == NULL || *head == NULL)
{
return (NULL);
}

before = NULL;
while ((*head)->next != NULL)
{
after = (*head)->next;
(*head)->next = before;
before = *head;
*head = after;
}
(*head)->next = before;
return (*head);
}
