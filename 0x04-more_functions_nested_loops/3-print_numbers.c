#include "main.h"
/**
*print_numbers - print numbers 0 through to 9
*
*_putchar:print character to stdout
*
*Return:always 0 (success)
 */
void print_numbers(void)
{
	int number = 48;

	while (number <= 57)
	{
		_putchar(number);
		number++;
	}
	_putchar('\n');
}
