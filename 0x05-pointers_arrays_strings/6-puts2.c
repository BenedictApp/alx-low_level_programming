#include "main.h"
/**
  *puts2 - print a string
  *
  *@str:the string to print
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
