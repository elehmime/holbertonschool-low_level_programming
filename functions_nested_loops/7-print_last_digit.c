#include "main.h"

/**
 * print_last_digit - function
 * @n: value
 *
 * Return: last digit of n
 */
int	print_last_digit(int n)
{
	int	b;

	b = n % 10;
	if (b < 0)
		b *= -1;
	_putchar(b + '0');
	return (b);
}
