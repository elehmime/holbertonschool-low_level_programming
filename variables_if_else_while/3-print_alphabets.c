#include <unistd.h>
/**
 * main - Main function
 *
 * Return: Exit status code
 */
int	main(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n", 53);
	return (0);
}
