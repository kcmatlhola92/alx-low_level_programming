#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of
 * a listint_t linked list
 * @head: pointer to the head of the list
 * @index: position of the node
 * Return: the nth node of the listint_t, NULL if it doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int index;

	if (index == 0 && head)
		return (head);

	for (index = 0; head && index < index; index++)
		head = head->next;

	if (head)
		return (head);
	return (NULL);
}
