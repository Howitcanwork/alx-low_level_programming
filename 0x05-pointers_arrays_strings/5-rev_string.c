#include "main.h"
#include <string.h>

/**
 * rev_string - function
 * @s: string
 * Return: 0
 */
void rev_string(char *s)
{
	int i;
	int length = strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		char temp = s[i];

		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
