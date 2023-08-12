#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: always return 0
 */
int main(void)
{
	char lower;

	for (lower = 'a';lower <= 'z';lower++)
		putchar(lower);
	putchar('\n');

	return (0);
}
