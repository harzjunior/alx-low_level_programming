#include "lists.h"

/**
* print_dlistint - outputs a doubly linked list
* @h: ptr to the list
* Return: num of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
