#include <stdio.h>
/**
 * main - print size
 *
 * Return: always return 0 (Success)
 *
 */
int main(void)
{
	printf("size of char: %ld\n", sizeof(char));
	printf("size of int: %ld\n", sizeof(int));
	printf("size of long int: %ld\n", sizeof(long int));
	printf("size of long long int: %ld\n", sizeof(long long int));
	printf("size of float: %ld\n", sizeof(float));

	return (0);
}
