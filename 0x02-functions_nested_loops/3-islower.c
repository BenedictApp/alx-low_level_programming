#include "main.h"
#include <ctype.h>
/**
*_islower - checks for lower case character
*
*@c: paramet to be printed
*
*Return: 1 if it is a lower case
*
*and  return 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
