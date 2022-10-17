#include "main.h"
/**
 *_pow_recursion - function
 *@x: int
 *@y: int
 *
 *Return: value
 */
int	_pow_recursion(int x, int y)
{
	int	z = x;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	z = x * _pow_recursion(x, y - 1);
	return (z);
}
