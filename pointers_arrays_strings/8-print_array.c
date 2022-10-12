#include "main.h"
#include <stdio.h>
/**
 *print_array - function
 *@a: int
 *@n: int
 *
 */
void	print_array(int *a, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i + 1 < n)
			printf(", ");
		i++;
	}
	printf("\n");
}
