#include "lists.h"
/**
 * pop_listint - function
 * @head: pointer
 * Return: head
 */
int pop_listint(listint_t **head)
{
	listint_t *end_node;
	int i = 0;

	if (*head == NULL)
		return (0);
	i = (*head)->n;
	end_node = *head;
	*head = (*head)->next;
	free(end_node);
	end_node = NULL;

	return (i);
}
