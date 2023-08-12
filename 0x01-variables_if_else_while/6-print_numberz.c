#include <stdio.h>
/**
 * main - print all single digits base on 10 and zero
 * Return: always return 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar(x + '0');
	putchar('\n');

	return (0);
}
