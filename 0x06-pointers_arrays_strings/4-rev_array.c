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

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[j] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
