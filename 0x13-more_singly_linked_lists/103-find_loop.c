#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 * a linked list.
 * @head: pointer to the head of the list.
 *
 * Return: NULL if there's no loop.
 * else - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *i, *j;
if (head == NULL || head->next == NULL)
return (NULL);
i = head->next;
j = (head->next)->next;
while (j)
{
if (i == j)
{
i = head;
while (i != j)
{
i = i->next;
j = j->next;
}
return (i);
}
i = i->next;
j = (j->next)->next;
}
return (NULL);
}
