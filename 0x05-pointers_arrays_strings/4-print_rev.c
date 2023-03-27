#include "main.h"
/**
*print_rev - print a string in reverse order
*
*@s: sring character to print
*
*Return: nothing
*/
void print_rev(char *s)
{

	int eachElement;

	int count = 0;

	for (eachElement = 0; s[eachElement] != '\0'; eachElement++)
	{
		_putchar(count++);

	}
	for (eachElement = count; eachElement >= 0; eachElement--)
	{
		_putchar(s[eachElement]);
	}
	_putchar('\n');
}
