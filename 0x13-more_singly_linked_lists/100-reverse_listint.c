#include "lists.h"

/**
 * reverse_listint -function to reverses
 * @head: pointer to pointer
 * Return: pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	pre = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = next;
	}
	*head = pre;
	return (*head);
}
