#include "lists.h"

/**
 * listint_len - returns the number of elements
 * in a linked listint_t list
 * @h: the head of the list
 * Return: 0 always success
 */

size_t listint_len(const listint_t *h)
{
	size_t numElem = 0;

	while (h != NULL)
	{
		numElem++;
		h = h->next;
	}
	return (numElem);
}
