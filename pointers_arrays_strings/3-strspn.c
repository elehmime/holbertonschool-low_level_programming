#include "main.h"
/**
 *_strspn - function
 *@s: char
 *@accept: char
 *
 * Return: value
 */
unsigned int	_strspn(char *s, char *accept)
{
	unsigned int	x;
	unsigned int	y;
	int		f;

	if (s == 0 || accept == 0)
		return (0);
	x = 0;
	while (s[x])
	{
		f = 0;
		y = 0;
		while (accept[y])
		{
			if (accept[y] == s[x])
			{
				f = 1;
				break;
			}
			y++;
		}
		if (f == 0)
			break;
		x++;
	}
	return (x);
}
