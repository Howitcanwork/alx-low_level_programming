#include "lists.h"
/**
 * free_listint2 - function free
 * @head: pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *end_node;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		end_node = *head;
		end_node = end_node->next;
		free(*head);
		*head = end_node;
	}
}
