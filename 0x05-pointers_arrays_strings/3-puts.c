#include "main.h"
#include <string.h>

/**
 * _puts - function
 * @str: string
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
