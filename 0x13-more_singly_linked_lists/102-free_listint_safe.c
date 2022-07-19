#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 * index of a list
 * @head: A pointer to the address of the
 *        head of the list.
 * @index: The index of the node to be deleted.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *newNode, *tmp = *head;
unsigned int node;
if (tmp == NULL)
{
return (-1);
}
if (index == 0)
{
*head = (*head)->next;
free(tmp);
return (1);
}
for (node = 0; node < (index - 1); node++)
{
if (tmp->next == NULL)
{
return (-1);
}
tmp = tmp->next;
}
newNode = tmp->next;
tmp->next = newNode->next;
free(newNode);
return (1);
}
