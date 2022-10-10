#include "main.h"
/**
 *puts_half - function
 *@str: char
 *
 */
void	puts_half(char *str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i++])
		len++;
	i = 0;
	while (i < len)
	{
		if (i > (len - 1) / 2)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
