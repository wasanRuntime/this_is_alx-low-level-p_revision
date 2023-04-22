#include <stdio.h>
/**
 * main - print numbers from 0 -10
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num <= 10)
	{
		printf("%d\n", num);
		num++;
	}
	return (0);
}
