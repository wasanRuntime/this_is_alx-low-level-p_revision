#include <stdio.h>
/**
 * main - prints all possible singlr digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar((num % 10) + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
			num++;
	}
	putchar('\n');
	return (0);
}
