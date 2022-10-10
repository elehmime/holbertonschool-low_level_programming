#include "main.h"
/**
 *puts2 - function
 *@str: char
 *
 */
void	puts2(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while(str[i++])
		len++;
	i = 0;
	while (i < len)
	{
	_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
