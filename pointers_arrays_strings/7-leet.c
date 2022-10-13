#include "main.h"
/**
 **leet - functioin
 *@str: char
 *
 *Return: value
 */
char	*leet(char *str)
{
	int	i = 0;
	int	y = 0;
	char	*a;
	char	*b;

	a = "aAeEoOtTlL";
	b = "4433007711";
	while (str[i])
	{
		while (a[y])
		{
			if (str[i] == a[y])
			{
				str[i] = b[y];
				break;
			}
			y++;
		}
		y = 0;
		i++;
	}
	return (str);
}
