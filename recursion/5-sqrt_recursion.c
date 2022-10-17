#include "main.h"
/**
 * _sqrt_recursion_runtime - function
 * @n: int
 * @x: int
 *
 * Return: int
 */
int	_sqrt_recursion2(int n, int x)
{
	if ((x * x) == n)
		return (x);
	else if ((x * x) > n)
		return (1);
	else
		return (_sqrt_recursion2(n, x + 1));
}
/**
 * _sqrt_recursion - function
 * @n: int
 *
 * Return: int
 */
int	_sqrt_recursion(int n)
{
	return (_sqrt_recursion2(n, 0));
}
