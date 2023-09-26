#include "lists.h"
/**
 * print_listint - print all elements
 * @h: pointer
 * Return: num of element
 */

size_t print_listint(const listint_t *h)
{
	int num_elem = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_elem++;
	}
	return (num_elem);
}
