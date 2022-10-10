#include "main.h"
/**
 * _strlen - function
 *@s: char
 *
 * Return: value
 */
int	_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
