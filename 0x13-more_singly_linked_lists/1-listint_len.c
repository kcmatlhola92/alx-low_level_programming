#include "lists.h"

/**
 * listint_len - returns the number of elements
 * in a linked listint_t list
 * @h: the head of the list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
