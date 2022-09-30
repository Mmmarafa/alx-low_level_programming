#include <stdio.h>
/**
 * main - print the number of arguements passed to it
 * @argc: arguement count
 * @argv: array of pointer to a arguement strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
/* this is to suppress unused variable warning */
	argv = argv;
	printf("%d\n", argc - 1);
	return (0);
}
