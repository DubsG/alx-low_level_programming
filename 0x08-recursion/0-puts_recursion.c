#include "main.h"
/**
  *_puts_recursion -the main fucntion
  *
  * @s: function parameter
  *
  * Return: 0 always.
  */
void _puts_recursion(char *s);
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}

