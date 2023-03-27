#include "main.h"
/**
*_puts - print a sring
*
*@str: the string to print
*
*Return: nothing
 */
void _puts(char *str)
{
	int eachElement;

	for (eachElement = 0; str[eachElement] != '\0'; eachElement++)
		_putchar(str[eachElement]);
	_putchar('\n');
}
