#include <stdio.h>
/**
*main - Entry point
*Descriptin - print all single digit numbers of base 10
*Return: always 0 (sucess)
 */
int main(void)
{
	int startNumber = 0;

	while (startNumber <= 9)
	{
		printf("%d", startNumber);
		startNumber++;
	}

	printf("\n");

	return (0);

}
