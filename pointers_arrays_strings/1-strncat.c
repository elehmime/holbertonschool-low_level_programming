#include "main.h"
/**
 *_strncat - function
 *@dest: char
 *@src: chat
 *@n: int
 *
 *Return: value
 */
char	*_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (dest == 0)
		return (dest);
	while (dest[i])
		i++;
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
