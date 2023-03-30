#include "main.h"
/**
 *reverse_array - print string in reverse order
 *
 *@a: parameter function
 *
 *@n: parameter function
 *
 *Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
