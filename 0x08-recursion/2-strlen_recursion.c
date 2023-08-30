#include "main.h"
/**
 * _strlen_recursion - function
 * @s: char
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s > '\0')
	{
	i += _strlen_recursion(s + 1) + 1;
	}

		return (i);
}
