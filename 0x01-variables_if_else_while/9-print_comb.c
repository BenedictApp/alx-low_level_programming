#include <stdio.h>
/**
*main - Entry point
*Description - print all possible combination of a single number
*Return: always 0
 */
int main(void)
{
	for (int n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
			continue;
		putchar(',');
		putchar(' ');

	}
	putchar('\n');

	return (0);
}
