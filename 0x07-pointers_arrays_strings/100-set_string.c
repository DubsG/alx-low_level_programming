#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer pointing to a pointer
 * @to: pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}

