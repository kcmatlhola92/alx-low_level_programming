#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of
 * a list_t list
 * @head: head of the linked list
 * @str: string in the list
 * Return: the address of the new element,
 * or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int count = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	while (str[count])
		count++;
	new_node->len = count;
	return (new_node);
}
