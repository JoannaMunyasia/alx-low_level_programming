#include <unistd.h>

/**
 * _putchar - writes the character x to stdout,for it to be outputted
 * @x: The character to print
 *
 * Return: On success 1.
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
