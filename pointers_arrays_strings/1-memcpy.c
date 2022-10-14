#iclude "main.h"
/**
 **_memcpy - function
 *@dest: char
 *@src: char
 *@n; unsigned int
 *
 *Return: value
 */
char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	if (dest == 0 || src == 0)
		return (0);
	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
