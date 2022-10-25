#include "lists.h"

/**
 * pop_listint - deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * @head: pointer to the head
 * Return: if the linked list is empty, 0 if successful
 */

int pop_listint(listint_t **head)
{
	int res;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	res = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (res);
}
