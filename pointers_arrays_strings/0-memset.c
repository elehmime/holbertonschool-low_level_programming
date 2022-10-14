#include "mainh"
/**
 **_memset - function
 *@s: void
 *@c: int
 *@n: size_t
 *
 *Return: value
 */
void	*_memset(void *s, int c, size_t n)
{
	unsigned int i;
	unsigned char *m = s, value = c;

	for (i = 0; i < n; i++)
		m[i] = value;

	return (m);
}
