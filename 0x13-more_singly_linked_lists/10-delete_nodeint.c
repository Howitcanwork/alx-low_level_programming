#include "lists.h"
/**
 * delete_nodeint_at_index - function to delete
 * @head: pointer to a pointer
 * @index: index start from 0
 * Return: 1 if it successed, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n;
	listint_t *pointer_node, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	pointer_node = *head;
	n = 0;
	while (n < index - 1)
	{
		if (pointer_node->next == NULL)
			return (-1);
		pointer_node = pointer_node->next;
		n++;
	}
	next = pointer_node->next;
	pointer_node->next = next->next;
	free(next);
	return (1);

}
