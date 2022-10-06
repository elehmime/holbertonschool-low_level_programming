#include "main.h"
/**
 *print_line - function
 *@n: int
 *
 */
void	print_line(int n)
{
	if (n > 1)
	{
		while (n != 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
