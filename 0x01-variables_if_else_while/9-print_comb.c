#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: always return 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0')
			if (x < 5)
			{
				putchar(',');
				putchar(' ');
			}
		x++;
	}
	putchar('\n');

	return (0);
}
