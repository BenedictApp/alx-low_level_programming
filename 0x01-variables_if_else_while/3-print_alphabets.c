#include <stdio.h>
/**
*main - Enty point
*Description - program, print alphabet characters in both upper and lower case
*Return: always 0 (succesful)
 */
int main(void)
{
	int lowerCase = 97;

	int upperCase = 65;

	while (lowerCase <= 122)
	{
		putchar(lowerCase);
		lowerCase++;
	}
	while (upperCase <= 90)
	{
		putchar(upperCase);
		upperCase++;
	}
	putchar('\n');
	return (0);
}
