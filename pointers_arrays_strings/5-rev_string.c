#include "main.h"
/**
 * rev_string - function
 *@s: char
 *
 */
void	rev_string(char *s)
{
	int	i = 0;
	int	len = 0;
	char	t;

	while (s[len])
		len++;
	for (i = len - 1; i >= len / 2; i--)
	{
		t = s[i];
		s[i] = s[len - i - 1];
		s[len - i  - 1] = t;
	}
}
