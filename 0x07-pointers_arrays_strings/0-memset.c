#include "main.h"
/**
 *_memset - a functin that fills memry with constant byte
 *
 *@s: starting address
 *
 *@b: the desired value
 *
 *@n: the number of byte
 *
 *Return: new value for n byte
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		i++;
		s[i] = b;
		n--;
	}

	return (s);
}
