#include "main.h"

/**
 * jack_bauer - function
 */
void	jack_bauer(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < 24)
	{
		while (y < 60)
		{
			_putchar('0' + x / 10);
			_putchar('0' + x % 10);
			_putchar(':');
			_putchar('0' + y / 10);
			_putchar('0' + y % 10);
			_putchar('\n');
			y++;
		}
		y = 0;
		x++;
	}
}
