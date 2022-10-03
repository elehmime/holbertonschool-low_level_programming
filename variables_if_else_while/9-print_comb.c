#include <unistd.h>
/**
 * main - Main function
 *
 * Return: Exit status code
 */
int	main(void)
{
	int	i = 48;

	while (i <= 57)
	{
		write(1, &i, 1);
		if (i != 57)
			write(1, ", ", 2);
		i++;
	}
	return (0);
}
