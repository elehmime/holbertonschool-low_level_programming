#include <stdio.h>
#include "main.h"
/**
 * main - function
 * Return: 0
 */
int	main(void)
{
	int	c = 1;

	if (c < 100)
	{
		while (c < 100)
		{
			if (c % 5 == 0 && c % 3 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (c % 5 == 0)
			{
				printf("Buzz ");
			}
			else if (c % 3 == 0)
			{
				printf("Fizz ");
			}
			else
			{
				printf("%d ", c);
			}
			c++;
		}
		printf("Buzz");
		printf("\n");
	}
	return (0);
}
