#include "main.h"
/**
 **_memset - function
 *@s: char
 *@b: char
 *@n: unsigned int
 *
 *Return: value
 */
char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int	x;

	if (s == 0)
		return (0);
	x = 0;
	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
