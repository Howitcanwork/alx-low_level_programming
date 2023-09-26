#include "lists.h"

/**
 * find_listint_loop - function to finds the loop
 * @head: pointer
 * Return: address, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fstadd = head;
	listint_t *secadd = head;

	if (!head)
		return (NULL);

	while (fstadd && secadd && secadd->next)
	{
		secadd = secadd->next->next;
		fstadd = fstadd->next;
		if (secadd == fstadd)
		{
			fstadd = head;
			while (fstadd != secadd)
			{
				fstadd = fstadd->next;
				secadd = secadd->next;
			}
			return (secadd);
		}
	}

	return (NULL);
}
