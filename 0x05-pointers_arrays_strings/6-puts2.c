#include "main.h"
/**
  *puts2 - print a string of characters
  *
  *@str: prints every other character of a string, starting with the first character
  *
  *Return: nothing
  */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
