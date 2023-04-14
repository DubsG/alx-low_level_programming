#include "main.h"
/**
 * _strpbrk - finds a character that matches another character in
 * in another string
 * @s: inpt string
 * @accept: input string
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
		if (*s == accept[c])
		return (s);
		}
	s++;
	}

return ('\0');
}

