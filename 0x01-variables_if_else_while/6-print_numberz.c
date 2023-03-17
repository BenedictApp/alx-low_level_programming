#include <stdio.h>
/**
*main - Entry point
*Description - print all single digit numbers of base 10
*Return: always 0
 */
int main(void)
{
	for (int startNumber = 0; startNumber <= 9; startNumber++)
	{
		putchar(startNumber + 48);
	}
	putchar('\n');
	return (0);
}
