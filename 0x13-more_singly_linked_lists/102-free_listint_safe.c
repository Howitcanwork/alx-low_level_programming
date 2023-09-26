#include "lists.h"

/**
 * free_listint_safe - function to frees a linked list
 * @h: pointer
 * Return: number of elements
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int di;
	listint_t *end_node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		di = *h - (*h)->next;
		if (di > 0)
		{
			end_node = (*h)->next;
			free(*h);
			*h = end_node;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
