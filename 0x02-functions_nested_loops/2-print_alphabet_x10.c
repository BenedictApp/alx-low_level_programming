#include "main.h"
/**
*print_alphabet_x10 - printing alphabet 10 times
*Return: void
*/
void print_alphabet_x10(void)
{

	int timesTen;

	int alpha;

	for (timesTen = 1; timesTen <= 9; timesTen++)
	{
	for (alpha = 97; alpha <= 122; alpha++)
		{
		_putchar(alpha);
		}
	_putchar('\n');
	}
}
