#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 */
void print_alphabet_x10(void)
{
	int c, i;

	c = 0;
	while (c < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}

	_putchar('\n');
	i = 'a';
	c++;
	}
}
