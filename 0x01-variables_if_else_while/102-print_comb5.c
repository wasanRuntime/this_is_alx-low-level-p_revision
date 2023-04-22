#include <stdio.h>
/**
 * main - print digits from 00 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			/*print first two-digit number*/
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');

			/*print a separater*/
			putchar(' ');

			/*print second two-digit number*/
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			/*print comma after each combination except*/
			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
