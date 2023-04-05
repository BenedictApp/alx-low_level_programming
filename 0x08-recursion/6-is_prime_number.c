#include "main.h"
int check_prime(int, int);
/**
  *is_prime_number - returns the natural square root of a number
  *
  *@n: number
  *
  *Return: number
  */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
  *check_prime - recursive square root
  *
  *@n: number
  *
  *@j: iterator
  *
  *Return: a number
  */
int check_prime(int n, int j)
{
	if (n <= 1)
		return (0);
	if (n % j == 0 && j > 1)
		return (0);
	if ((n / j) < j)
		return (1);
	return (check_prime(n, j + 1));
}
