#include <unistd.h>
/**
 * main - Main function
 *
 * Return: Exit status code
 */
int	main(void)
{
	int	a = 0;
	int	b = 0;
	int	c = 0;
	int	d = 1;

	while (a < '9')
	{
		while (b < 9)
		{
			while (c < 9)
			{
				while (d < 9)
				{
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, " ", 1);
					write(1, &c, 1);
					write(1, &d, 1);
					if(a != 9 && b != 8)
						write(1, ",", 1);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	write(1, "\n", 1);
	return (0);
}
