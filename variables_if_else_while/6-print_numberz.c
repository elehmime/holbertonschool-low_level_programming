#include <unistd.h>
/**
 * main - Main function
 *
 * Return: Exit status code
 */
int	main(void)
{
	write(1, "0123456789\n", 11);
	return (0);
}
