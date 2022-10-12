#include "main.h"
/**
 *_strcat - function
 *@dest: char
 *@src: char
 *
 *Return: value
 */
char	*_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
