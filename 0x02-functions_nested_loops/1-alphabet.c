#include "main.h"
#include <stdio.h>
/**
*print_alphabet - printing alphabet
*Return: void
 */
void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 97; alphabet <= 122; alphabet++)
	{
		_putchar(alphabet);
		_putchar('\n');
	}
}
