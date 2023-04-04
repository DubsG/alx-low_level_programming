1#include "main.h"
2/**
3*_strchr - Entry
4 *@c: input character
5 *@s: input string
6 *Return: Always 0 (Success)
7 */
8 char *_strchr(char *s, char c)
9{
10	int i = 0;
11
12	for (; s[i] >= '\0'; i++)
13	{
14		if (s[i] == c)
15			return (&s[i]);
16	}
17	return (0);
18}

