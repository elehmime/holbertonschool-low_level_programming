#include <unistd.h>
/**
 * main - Main function
 *
 * Return: Exit status code
 */
int	main(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	return (0);
}
