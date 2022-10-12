#include "main.h"
/**
 **_strcpy - function
 *@dest: char
 *@src: char
 *
 *Return: value
 */
char	*_strcpy(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
