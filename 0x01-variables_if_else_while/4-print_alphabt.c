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
		if (lowerCase == 101 || 113)
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
