#include "lists.h"
/**
 * *add_nodeint - add node
 * @n: pointer
 * @head: pinter
 * Return: pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pointer_node = malloc(sizeof(listint_t));

	if (pointer_node == NULL)
		return (NULL);

	pointer_node->n = n;
	pointer_node->next = *head;
	*head = pointer_node;

	return (*head);
}
