#include <stdio.h>
/**
*main - Entry point
*Description - printing lowercase alphabet in reverse order
*Return: always 0
 */
int main(void)
{
	for (int lowerCase = 122 ; lowerCase >= 97 ; lowerCase--)

		putchar(lowerCase);

	putchar('\n');
	return (0);
}
