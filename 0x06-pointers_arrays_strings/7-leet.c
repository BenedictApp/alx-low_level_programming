#include "main.h"
/**
  *leet -  leet encoding
  *
  *@str: string to be encoded
  *
  *Return: str
  */
char *leet(char *str)
{
	int i;

	int j;

	char *a = "aAeEoOtTtlL";

	char *b = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
			if (str[i] == a[j])
				str[i] = b[j];

	}

	return (str);
}
