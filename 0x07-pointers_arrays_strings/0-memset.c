#include "main.h"
/**
 * _memset - fills the first n bytes of the memory with a value
 * @b: value to be filled to the _memset
 * @n: number of bytes to be changed
 * @s: the initial address of the memory to be filled
 *
 * Return: the changed array with new value for n
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
