#include "main.h"
/**
 *_isalpha:checks for letters of the alphabet
 *@c:Letter to be checked
 *Return:one if letter, zero otherwise
*/
int _isalpha(int c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z'))
	{
		return (1);
	}
	else
		return (0);
}
