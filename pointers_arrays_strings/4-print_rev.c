#include "main.h"
/**
 *print_rev - function
 *@s: char
 *
 */
void	print_rev(char *s)
{
	int	len;
	int	i;

	len = 0;
	while (s[len])
	{
		len++;
	}
	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
