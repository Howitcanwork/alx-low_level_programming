#include "lists.h"

/**
 * insert_nodeint_at_index - function to new node
 * @head: pointer to a pointer
 * @idx: index
 * @n: value assign to new node
 * Return: address of the new node if success or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *after_p;
	listint_t *before_p = *head;
	listint_t *end_node = malloc(sizeof(listint_t));

	if (end_node == NULL)
		return (NULL);

	end_node->n = n;

	if (idx == 0)
	{
		end_node->next = before_p;
		*head = end_node;
		return (*head);
	}

	idx--;

	while (idx > 0)
	{
		if (before_p != NULL)
			before_p = before_p->next;
		idx--;
	}

	if (before_p == NULL)
	{
		free(end_node);
		return (NULL);
	}

	after_p = before_p->next;
	end_node->next = after_p;
	before_p->next = end_node;

	return (end_node);
}
