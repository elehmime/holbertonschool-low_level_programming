#include "main.h"
/**
 *reverse_array - function
 *@a: int
 *@n: int
 *
 */
void	reverse_array(int *a, int n)
{
	int	i = 0;
	int   t;

	while (i < (n / 2))
	{
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
		i++;
	}
}
