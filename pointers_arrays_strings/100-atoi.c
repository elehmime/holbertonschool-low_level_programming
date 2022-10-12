#include "main.h"
/**
 *_atoi - function
 *@s: char
 *
 *Return: value
 */
int	_atoi(char *s)
{
	unsigned int	i;
	int	n;
	int	atoi;

	i = 0;
	atoi = 0;
	while (s[i] && !(s[i] >= '0' && s[i] <= '9'))
		i++;
	n = 1;
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			n = -n;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		atoi = atoi * 10 + s[i] - 48;
		i++;
	}
	return (n * atoi);
}
