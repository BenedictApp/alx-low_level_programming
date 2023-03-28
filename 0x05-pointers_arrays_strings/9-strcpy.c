#include "main.h"
/**
  *_strcpy - copies string
  *@dest: Destination array
  *@src: surce array
  *Return: return string
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);

}
