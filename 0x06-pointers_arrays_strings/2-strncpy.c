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
	int i;

	int dest_length = 0;

	int src_length = 0;

	for (i = 0; dest[i] != '\0'; i++)
		dest_length++;
	for (i = 0; src[i] != '\0'; i++)
		src_length++;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

