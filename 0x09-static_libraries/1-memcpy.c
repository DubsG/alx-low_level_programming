#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: store of the memory
 * @src: new memory location
 * @n: bytes to be copied
 * Return: dest
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
