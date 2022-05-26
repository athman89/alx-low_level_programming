#include "lists.h"
/**
 * pop_listint - Entry Point
 * @head: head
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int node_data;

	listint_t *new_node;

	if (*head == NULL)
	{
		return (0);
	}

	node_data = (*head)->n;

	new_node = *head;
	*head = (*head)->next;

	free(new_node);
	return (node_data);
}
