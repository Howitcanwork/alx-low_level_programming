#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit number
 * Return: always return 0
 */
int main(void)
{
	int x;

	x = '0';
	while (x <= '9')
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');

	return (0);
}

