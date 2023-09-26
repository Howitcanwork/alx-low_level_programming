#include "lists.h"

/**
 * get_nodeint_at_index - function
 * @head: pointer
 * @index: index
 * Return: pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
