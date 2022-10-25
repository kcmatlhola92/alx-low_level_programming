#include "lists.h"

/**
 * sum_listint - the sum of all the data (n)
 * of a listint_t linked list
 * @head: pointer of the head of the list
 * Return: sum of all data, 0 if not exist
 */

int sum_listint(listint_t *head)
{
	int res = 0;

	while (head)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
