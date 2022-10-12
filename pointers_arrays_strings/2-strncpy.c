#include "main.h"
/**
 *_strncpy - function
 *@dest: char
 *@src: char
 *@n: int
 *
 *Return: value
 */
char	*_strncpy(char *dest, char *src, int n)
{
	int	i = 0;

	if (dest == 0)
		return (0);
	if (src == 0)
		return (0);
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
