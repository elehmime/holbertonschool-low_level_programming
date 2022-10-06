#include <stdio.h>
/**
 * main - function
 * Return: 0
 */
int	main(void)
{
	int	c = 1;

	if (c < 100)
	{
		while (c <= 100)
		{
			if (c % 5 == 0 && c % 3 == 0)
			{
				printf("fizzbuzz ");
			}
			else if (c % 5 == 0)
			{
				if (c == 100)
				{
					printf("buzz");
					printf("\n");
				}
				else
					printf("buzz ");
			}
			else if (c % 3 == 0)
			{
				printf("fizz ");
			}
			else
			{
				printf("%d ", c);
			}
			c++;
		}
	}
	return (0);
}
