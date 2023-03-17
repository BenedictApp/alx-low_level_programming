#include <stdio.h>
/**
*main - Entry point
*Description - printing lowercase alphabet in reverse order
*Return: always 0
 */
int main(void)
{
	int lowerCase = 122;

		while (lowerCase >= 97)
		{
			putchar(lowerCase);
			lowerCase--;
		}

	putchar('\n');
	return (0);
}
