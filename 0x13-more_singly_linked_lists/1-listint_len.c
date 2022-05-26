#include "lists.h"
/**
 * listint_len - Entry Point
 * @h: head
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	int num = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
