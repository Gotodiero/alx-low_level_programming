#include <stdio.h>

/**
 * main - print out size of data types in C
 * Return: Always 0
*/
int main(void)
{

	printf("Size of char: %lu byte\n", sizeof(char));
	printf("Size of int: %lu byte\n", sizeof(int));
	printf("Size of long int: %lu byte\n", sizeof(long int));
	printf("Size of long long int: %lu byte\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	return (0);
}
