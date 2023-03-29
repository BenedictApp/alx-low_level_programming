#include "main.h"
/**
  *_strncat - concatinate number of src string to dest string
  *
  *@dest: destination string
  *
  *@src: src string
  *
  *@n: number of string to to concat.
  *Return: dest string
  */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;

	int src_length = 0;

	int i;

	for (i = 0; dest[i] != '\0'; i++)/*finding the length of dest string*/
		dest_length++;

	for (i = 0; src[i] != '\0'; i++)/*finding the length of src string*/
		src_length++;
	for (i = 0; i < n; i++)
	{

	dest[dest_length + i] = src[i];/*cat. @n src string to dest string*/
	}
	return (dest);
}
