#include "main.h"
/**
  *swap_int - swapping two variables
  *@a: value 1
  *
 *@b: value 2
  *
  *Return: nothing
  */
void swap_int(int *a, int *b)
{
	int duplicate;

	duplicate = *a;
	*a = *b;
	*b = duplicate;

}
