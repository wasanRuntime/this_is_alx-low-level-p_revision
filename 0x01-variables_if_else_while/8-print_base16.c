#include <stdio.h>
/**
 * main - prints all numbers of base 16
 *
 * Return: Always return 0
 */
int main(void)
{
	int num;
	char letter;

	num = 0;
	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
