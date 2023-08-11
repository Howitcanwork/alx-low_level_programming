#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * description :get the last digit of a number
 * Return : always return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
		printf("Last digit of %d is %d and is grater than 5\n");
	else if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0\n");
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n");
	return (0);

}
