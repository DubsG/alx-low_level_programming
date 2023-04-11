#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars and intializes it
 * @NULL: Value to be returned if size equals 0
 * Return: On success Pointer to an array
 * On error: Null
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

