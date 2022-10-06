#include "main.h"
/**
 *print_square - function
 *@size: int
 *
 */
void	print_square(int size)
{
	int	c;
	int	t;

	c = size;
	t = size;
	if (size > 0)
	{
		while (c != 0)
		{
			while (t != 0)
			{
				_putchar('#');
				t--;
			}
			c--;
			t = size;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
