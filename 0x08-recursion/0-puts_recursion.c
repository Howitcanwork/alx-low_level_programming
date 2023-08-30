#include "main.h"
/**
 * _puts_recursion - fumction
 * @s: char
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		if (*s == '\0')
		{	_putchar('\n');
			return;
		}
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
