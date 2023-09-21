#include "lists.h"
/**
 * _strlen - return the length
 * @s: string
 * Return: int length of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		returb (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - print a linked list
 * @p: pointer to first node
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (p)
	{
		printf("[%d] %s\n", _strlen(p->str), p->str ? p->str : "(nil)");
		p = p->next;
		i++;
	}
	return (i);
}
