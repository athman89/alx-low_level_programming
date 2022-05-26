#include "lists.h"
/**
 * insert_nodeint_at_index - Entry Point
 * @head: head
 * @idx: index
 * @n: data
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num = 0;

	listint_t *new_node;
	listint_t *temp;

	if (*head == NULL)
	{
		return (NULL);
	}
	temp = *head;

	while (temp != NULL)
	{
		if (num == idx - 1)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
			{
				return (NULL);
			}
			else
			{
				new_node->n = n;
				new_node->next = temp->next;
				temp->next = new_node;
				return (new_node);
			}
		}
		if (temp->next != NULL)
			temp = temp->next;
		num++;
	}
	return (NULL);
}
