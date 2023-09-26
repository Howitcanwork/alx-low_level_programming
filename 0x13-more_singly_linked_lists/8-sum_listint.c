#include "lists.h"

/**
 * sum_listint - function to sum
 * @head: pointer
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int su = 0;

	while (head != NULL)
	{
		su += head->n;
		head = head->next;
	}
	return (su);
}
