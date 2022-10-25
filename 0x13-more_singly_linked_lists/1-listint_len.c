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
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}

	return (count);
}
