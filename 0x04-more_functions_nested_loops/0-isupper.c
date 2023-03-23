#include "main.h"
/**
*@c:The character to print
*
*_putchar:print the character to stdout
*
*_isupper - the function to print uppercase character
*
*Return:return (1) if c uppercase or (0) otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

	return (c);
}
