#include "main.h"

/**
 * _abs - give the absolute value.
 *
 * @x: to be checked
 * Return: Always 0.
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = (-1) * x;
	}
	return (x);
}
