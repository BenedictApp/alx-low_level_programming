#include <stdio.h>
/**
*main - Entry point
*Description - print alphabet characters in lower case
*Return: always 0 (success)
 */
int main(void)
{
	int lowerCase = 97;

	while (lowerCase <= 122)
	{
		if (lowerCase == 113 || lowerCase == 101)
		{
			lowerCase++;
			continue;
		}
		putchar(lowerCase);
		lowerCase++;
	}
	putchar('\n');
	return (0);
}
