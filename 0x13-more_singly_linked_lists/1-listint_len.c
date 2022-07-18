#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: singly linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t a;

	for (a = 0; h; i++)
		h = h->next;
	return (a);
}
