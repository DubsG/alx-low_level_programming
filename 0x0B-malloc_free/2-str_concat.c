#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Links two strings
 * @s1: String one
 * @s2: String two
 * Return: Linked string one and string two
 * On failure: Null
 */
char *str_concat(char *s1, char *s2)
{
	char *link;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	link = malloc(sizeof(char) * (i + ci + 1));

	if (link == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		link[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		link[i] = s2[ci];
		i++, ci++;
	}
	link[i] = '\0';
	return (link);
}
