#include "main.h"
/**
 * print_numbers - function
 */
void	print_numbers(void)
{
	int	c;

	c = 48;
	while (c <= 57)
	{
		if (c != 50 && c != 52)
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
