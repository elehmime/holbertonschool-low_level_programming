#include "main.h"
/**
 *print_number - function
 *@n: int
 *
 */
void	print_number(int n)
{
	unsigned int	b = n;

	if (n < 0)
	{
		_putchar('-');
		b = -b;
	}
	if (b / 10 != 0)
		print_number(b / 10);
	_putchar(b % 10 + '0');
}
