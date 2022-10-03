#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Main function
 *
 * Return: Exit status code
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is ", n);
	if (n > 0)
	{
		while (n > 10)
			n %= 10;
		if (n > 5)
			printf("%d and is greater than 5\n", n);
		if (n < 6 && n != 0)
			printf("%d and is less than 6 and not 0\n", n);
		if (n == 0)
			printf("%d and is 0\n", n);
	}
	if (n < 0)
	{
		while (n < -10)
			n %= 10;
		if (n > 5)
			printf("%d and is greater than 5\n", n);
		if (n < 6 && n != 0)
			printf("%d and is less than 6 and not 0\n", n);
		if (n == 0)
			printf("%d and is 0\n", n);
	}
	return (0);
}
