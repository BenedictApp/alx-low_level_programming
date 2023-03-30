#include "main.h"
/**
 *_strncpy - copy a string
 *
 *@dest: destination string
 *
 *@src: src string
 *
 *@n: number of string to copy
 *
 *Return: dest string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

