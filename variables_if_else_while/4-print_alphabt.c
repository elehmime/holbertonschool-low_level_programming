#include <unistd.h>
/**
 * main - Main function
 *
 * Return: Exit status code
 */
int	main(void)
{
	write(1, "abcdfghijklmnoprstuvwxyz\n", 25);
	return (0);
}
