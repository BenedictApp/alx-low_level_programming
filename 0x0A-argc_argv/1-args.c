#include <stdio.h>
/**
  *main - print the name of arg
  *
  *argc: argument count
  *
  *argv: argument vector
  *
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
