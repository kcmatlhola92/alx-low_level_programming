#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointer to the head
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
}
