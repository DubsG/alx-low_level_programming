#include "main.h"
/**
 * _memcpy - function that copied memory
 * @dest: store of the memory
 * @src: the locatiob where the memory is copied
 * @n: memory to be copied
 *
 * Return: copied memory
 */
char * _memcpy(char *dest, char *src, unsigned int n)
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
