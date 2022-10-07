#include "main.h"
/**
 *print_number - function
 *@n: int
 *
 */
void	print_number(int n)
{
	int	b;

	b = n;
	if (b < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 > 0)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
