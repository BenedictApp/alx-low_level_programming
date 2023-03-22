#include "main.h"
/**
*_isalpha - checking if c is a letter , lower or upper case character
*
*@c: character to be printed
*
*Return: print 1 if C is a letter, lower case or upper case letter
*
*otherwise print out zero (0)
 */
int _isalpha(int c)
{

	if ((c >= 65 && c <= 98) || (c <= 97 && c >= 122))
	{
	return (1);
	}
	return (0);

}
