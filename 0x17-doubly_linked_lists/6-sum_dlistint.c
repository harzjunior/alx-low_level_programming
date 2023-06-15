#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data in a doubly linked list
* @head: ptr to the lst
* Return: sum of the data
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
