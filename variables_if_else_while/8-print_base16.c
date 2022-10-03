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
		i++;
	}
	i = 97;
	while (i <= 102)
	{
		write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
