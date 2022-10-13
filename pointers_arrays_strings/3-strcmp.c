#include "main.h"
/**
 *_strcmp - function
 *@s1: char
 *@s2: char
 *
 *Return: value
 */
int	_strcmp(char *s1, char *s2)
{
	int	i = 0;
	int	j = 0;

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (i == j)
		return (0);
	if (i > j)
		return (1);
	if (i < j)
		return (-1);
}
