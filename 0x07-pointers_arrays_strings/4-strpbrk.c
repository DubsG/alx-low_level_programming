#include "main.h"
/**
 * _strpbrk - Finds a character and matches it
 * @s: input string
 * @accept: input string
 *
 * Return: Always 0 (Succees)
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}

