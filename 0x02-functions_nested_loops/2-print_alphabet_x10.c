#include "main.h"
/**
*print_alphabet_x10 -  printing alphabet 10 times
*Return: void
 */
void print_alphabet_x10(void)
{
	int tenTimes = 0;

	int alpha;

	while (tenTimes <= 9)
	{
	for (alpha = 97; alpha <= 122; alpha++)
	{
	_putchar(alpha);

	}
	_putchar('\n');

	tenTimes++;

	}
}
