#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print random number
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*yourcode goes here*/
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
