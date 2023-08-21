#include "main.h"
#include <string.h>
/**
 * puts2 - function
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
	int i;
	int length = strlen(str);

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
