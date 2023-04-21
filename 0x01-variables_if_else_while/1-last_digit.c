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
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*yourcode goes here*/
	x = n % 10;

	if (x > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, x);
	if (x == 0)
		printf("The last digit of %d is %d and is zero\n", n, x);
	if (x < 6 && x != 0)
		printf("The last digit of %d is %d and is less than 6 and not zero\n", n, x);

	return (0);
}
