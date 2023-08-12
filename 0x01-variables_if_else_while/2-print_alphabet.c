#include <stdio.h>
/**
 * main - Entry point
 * description: C program
 * Return: always return 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')

	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
