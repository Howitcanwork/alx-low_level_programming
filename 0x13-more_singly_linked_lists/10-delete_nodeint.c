#include "lists.h"
/**
 * delete_nodeint_at_index - function to delete
 * @head: pointer to a pointer
 * @index: index start from 0
 * Return: 1 if it successed, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del = *head;
	listint_t *pointer_node;

	if (del == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
		return (1);
	}

	while (index > 1)
	{
		if (del->next != NULL)
			del = del->next;
		index--;
	}

	pointer_node = del->next;

	del->next = pointer_node->next;
	free(pointer_node);
	return (1);
}
