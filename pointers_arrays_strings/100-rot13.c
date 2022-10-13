#include "main.h"
/**
 **rot13 - function
 *@str: char
 *
 *Return: value
 */
char	*rot13(char *str)
{
	int	i = 0;
	int	y = 0;
	char	*a;
	char	*b;

	a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
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
