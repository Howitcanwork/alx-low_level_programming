#include "main.h"
#include <string.h>

/**
 * puts_half - function
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int odd = len / 2;

	if (len % 2 == 1)
	{
		odd++;
	}
	for (i = odd; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
