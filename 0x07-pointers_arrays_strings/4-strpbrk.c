#include "main.h"
/**
 * *_strpbrk - function
 * @s: string
 * @accept: number
 * Return: number of bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
