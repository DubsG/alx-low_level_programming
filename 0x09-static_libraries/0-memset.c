#include "main.h"

/**
 * _memset - sets the first count bytes of dest to the value c
 * @s: the address of the memry to be value to be set
 * @b: desired memory value
 * @n: bytes to be changed
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
