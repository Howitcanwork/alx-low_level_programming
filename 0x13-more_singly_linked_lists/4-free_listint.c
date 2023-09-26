#include "lists.h"
/**
 * free_listint - function free
 * @head: pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *end_node;

	while (head != NULL)
	{
		end_node = head;
		head = head->next;
		free(end_node);
	}
}
