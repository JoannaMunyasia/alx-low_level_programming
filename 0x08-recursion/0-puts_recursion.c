#include "main.h"

/**
 *_puts_recursion-prints a string
 *@s:A pointer to a char
 *Return:0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
