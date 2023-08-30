#include "main.h"
/**
 * _strlen_recursion - function
 * @s: char
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int i;

	if (s[i] == '\0')
	{
		return i;
	}
	_strlen_recursion(s,++i);
}
