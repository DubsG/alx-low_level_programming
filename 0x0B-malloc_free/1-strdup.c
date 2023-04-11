#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *_strdup - the duplicated memory location
 *@str: char 
 * Return: On success returns a pointer to the duplicated string
 * On error: returns NULL if the memory is insufficient
 */
char *_strdup(char *str)
{
	char *zzz;
	int i, r = 0;

	if (str == 0)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	zzz = malloc(sizeof(char) * (i + 1));

	if (zzz == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		zzz[r] = str[r];

	return (zzz);
}
