#include  <stdio.h>
/**
*main - starting point
*Description - program to print out alphabet in low case
*Return: always 0 (sucess)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
