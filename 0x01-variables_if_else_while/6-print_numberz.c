#include <stdio.h>
/**
*main - Entry point
*Description - print all single digit numbers of base 10
*Return: always 0
 */
int main(void)
{
	int startNumber = 0;

	while (startNumber <= 9)
	{
		putchar(startNumber + 48);
		startNumber++;
	}

	putchar('\n');
	return (0);
}
