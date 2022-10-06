#include "main.h"
/**
 *more_numbers - function
 */
void	more_numbers(void)
{
	int	c = 0;
	int	n = 0;

	while (n <= 9)
	{
		while (c <= 14)
		{
			if (c > 9)
				_putchar(c / 10 + '0');
			_putchar(c % 10 +'0');
			c++;
		}
		_putchar('\n');
		n++;
		c = 0;
	}
}
