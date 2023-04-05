#include "main.h"
/**
  *factorial - function that returns the factorial of a given number.
  *
  *@n: number
  *
  *Return: interger value
  */
int factorial(int n)
{
	if (n < 0) /* base case */
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
