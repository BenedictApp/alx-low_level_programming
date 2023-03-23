#include "main.h"
/**
*_isupper - print ut uppercase characters
*
*@c:the character to print
*
*_putchar:print the character to stdout
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
