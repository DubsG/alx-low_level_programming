#include "main.h"
/**
 *_memcpy - copies n bytes from src memory to dest memory
 *@n: memory to be copied
 *@dest: the new destination for the copied memory
 *@src: source of the memory to be copied
 *
 *Return: memory copied in the new destiantion (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n);
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

