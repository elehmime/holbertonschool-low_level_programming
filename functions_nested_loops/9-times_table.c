#include "main.h"
/**
 *  times_table - function
 *
 */
void	times_table(void)
{
	int	x;
	int	y;
	int	b;

	x = 0;
	y = 1;
	while (x <= 9)
	{
		_putchar('0');
		while (y <= 9)
		{
			_putchar(',');
			_putchar(' ');
			b = x * y;
			if (b > 9)
				_putchar((b / 10) + '0');
			else
				_putchar(' ');
			_putchar((b % 10) + '0');
			y++;
		}
		_putchar('\n');
		y = 1;
		x++;
	}
}
