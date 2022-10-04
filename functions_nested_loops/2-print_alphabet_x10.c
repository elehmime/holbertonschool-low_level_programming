#include <unistd.h>

/**
 * print_alphabet_x10 - function
 */
void print_alphabet_x10(void)
{
	char	c;
	int	i;

	c = 'a';
	i = 1;
	while (i <= 10)
	{
		while (c <= 'z')
		{
			write(1, &c, 1);
			c++;
		}
		c = 'a';
		write(1, "\n", 1);
		i++;
	}
}
