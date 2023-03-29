#include "main.h"
/**
 *_strcat - function that concatenate src string to dest string
 *
 *@dest: Destination string
 *
 *@src: Source string
 *
 *Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	int dest_length = 0;

	int src_length = 0;

	int i;

	for (i = 0; dest[i] != '\0'; i++)/* finding the length of the dest string */
		dest_length++;
	for (i = 0; src[i] != '\0'; i++)/* finding the length of the src string */
		src_length++;
	for (i = 0; i <= src_length; i++)
	{
		dest[dest_length + i] = src[i];/* cat. the src string to dest string */
	}
	return (dest);
}
