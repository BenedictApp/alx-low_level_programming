#include "main.h"
/**
*_isdigit - print out digits 0 through 9
*
*@c:the character to print
*
*Return:return (1) if c is 0 through to 9 else (0) for otherwsie
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 52)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
