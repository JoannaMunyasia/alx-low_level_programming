#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if a letter c is  an uppercase letter.
 * @c: Int representing a character(ASCII code)
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
