#include <stdio.h>
/**
 * main - print a string followed by new line
 *
 * Return: 1 (standard error)
 */
int main(void)
{
	int i;
	char str[] = "with proper grammar, but the outcome is a piece of art,";

	for (i = 0; str[i]; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
