#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: pointer to the head of a dlistint_t list to free
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
