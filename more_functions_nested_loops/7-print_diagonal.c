#include "main.h"
/**
 *print_diagonal - function
 *@n: int
 */
void	print_diagonal(int n)
{
	int	c;
	int	b;

	c = 0;
	b = 0;
	if (n > 1)
	{
		while (c < n)
		{
			while (b < c)
			{
				_putchar(' ');
				b++;
			}
			_putchar('\\');
			_putchar('\n');
			c++;
			b = 0;
		}
	}
	_putchar('\n');
}
