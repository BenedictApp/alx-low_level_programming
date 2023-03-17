#include <stdio.h>
/**
*main - Entry point
*Description - print all possible combination of a single number
*Return: always 0
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
		putchar(',');
		putchar(' ');
		if (n == 57)
			continue;
	}
	putchar('\n');

	return (0);
}
