#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to the beginning of the list
 * @n: integer to add to the list
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *current;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = node;
	return (node);
}
