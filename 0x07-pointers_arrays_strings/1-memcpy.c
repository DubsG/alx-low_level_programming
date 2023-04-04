#include "main.h"
/**
 * _memcpy - function that copies memory
 * @dest:location where  memory is stored
 * @src: location where memory is copied
 * @n: number of bytes to be copied
 *
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
