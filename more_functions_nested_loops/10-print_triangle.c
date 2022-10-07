#include "main.h"
/**
 *print_triangle - function
 *@size: int
 *
 */
void	print_triangle(int size)
{
	int	x;
	int	b;

	b = size;
	x = 0;
	if (size >= 1)
	{
		while (size >= 1)
		{
			while (x != (size - 1))
			{
				_putchar(' ');
				x++;
			}
			while (x != b)
			{
				_putchar('#');
				x++;
			}
			_putchar('\n');
			size--;
			x = 0;
		}
	}
	else
		_putchar('\n');
}
