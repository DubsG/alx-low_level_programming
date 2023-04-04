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
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}

