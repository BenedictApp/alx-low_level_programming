#include <stdio.h>
/**
*main - Entry Point
*Descriptin - print all numbers f base 16 in lower case
*Return: always 0
 */
int main(void)
{

	int lowerCase = 48;
	int lowerCaseAlpha = 97;

	while (lowerCase <= 57)
	{
		putchar(lowerCase);
		lowerCase++;
	}
	while (lowerCaseAlpha <= 102)
	{
		putchar(lowerCaseAlpha);
		lowerCaseAlpha++;
	}

	putchar('\n');
	return (0);
}
