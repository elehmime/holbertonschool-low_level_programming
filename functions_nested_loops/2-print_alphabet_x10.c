#include <unistd.h>

/**
 * print_alphabet_x10 - function
 */
void print_alphabet_x10(void)
{
	char	c;
	int	i;

	c = 'a';
	i = 0;
	while (i <= 10)
	{
		while (c <= 'z')
		{
			write(1, &c, 1);
			c++;
		}
		i++;
	}
	write(1, "\n", 1);
}
