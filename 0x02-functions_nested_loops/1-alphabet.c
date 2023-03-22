#include "main.h"
/**
*print_alphabet - print alphabet in lower case
*Return: void
 */

void print_alphabet(void)
{
	int lowerCase = 97;

	while (lowerCase <= 122)
	{
		_putchar(lowerCase);
		lowerCase++;

	}
	_putchar('\n');
}
