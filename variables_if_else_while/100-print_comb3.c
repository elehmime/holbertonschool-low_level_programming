#include <unistd.h>
/**
 *
 *
 *
 */
void	_putchar(char c)
{
	write(1, &c, 1);
}
int	main(void)
{
	int	x = 0;
	int	y = 1;

	while (x <= 8)
	{
		while (y <= 9)
		{
			if (x != y)
			{
				_putchar(x % 10 + '0');
				_putchar(y % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		y = 1;
		x++;
	}
	return (0);
}
