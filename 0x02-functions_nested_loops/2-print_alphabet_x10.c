#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 */
void print_alphabet_x10(void)
{
	int c = 'a', i = 0;

	while (i < 10)
	{

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
		i++;
	}
}
