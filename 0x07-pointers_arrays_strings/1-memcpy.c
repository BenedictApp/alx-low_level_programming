#include "main.h"
/**
  *_memcpy - function that copies memory area
  *
  *@dest: destination memory
  *
  *@src: src memory
  *
  *@n: number of byte
  *
  *Return: destination
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;

	int i = n;

	for (r = 0; r < i; i++)
	{
		dest[r] = src[r];
		n--;
	}

	return (dest);
}
