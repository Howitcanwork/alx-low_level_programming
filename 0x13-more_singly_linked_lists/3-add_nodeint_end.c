#include "lists.h"
/**
 * add_nodeint_end - new node to the end
 * @head: pointer
 * @n: pointer
 * Return: pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node = malloc(sizeof(listint_t)), *pointer_node = *head;

	if (end_node == NULL)
		return (NULL);
	end_node->n = n;
	end_node->next = NULL;
	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	while (pointer_node->next != NULL)
	{
		pointer_node = pointer_node->next;
	}
	pointer_node->next = end_node;
	return (end_node);
}
