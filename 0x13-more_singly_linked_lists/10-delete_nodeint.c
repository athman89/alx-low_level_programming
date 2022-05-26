#include "lists.h"
/**
 * delete_nodeint_at_index - Entry Point
 * @head: head
 * @index: index
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int num = 0;

	listint_t *copy_new;
	listint_t *temp;

	if (*head == NULL)
	{
		return (-1);
	}
	copy_new = *head;

	if (index == 0)
	{
		temp = copy_new->next;
		free(copy_new);
		*head = temp;
		return (1);
	}

	while (copy_new != NULL)
	{
		if (num + 1 == index)
		{
			temp = copy_new->next;
			copy_new->next = temp->next;
			free(temp);
			return (1);
		}
		if (copy_new->next != NULL)
			copy_new = copy_new->next;
		count++;
	}
	return (-1);
}
