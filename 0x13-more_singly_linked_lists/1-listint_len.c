#include "lists.h"
/**
 * listint_len - num of element
 * @h: pointer
 * Return: num of elemnt in nodes
 */
size_t listint_len(const listint_t *h)
{
	int num_elem = 0;

	while (h)
	{
		h = h->next;
		num_elem++;
	}
	return (num_elem);
}
