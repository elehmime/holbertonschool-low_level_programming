#include "main.h"
/**
 * _isalpha - function
 * @c: char value
 *
 * Return: whether c is alpha
 */
int	_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
