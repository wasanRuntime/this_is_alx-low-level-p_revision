#include <stdio.h>
/**
 * main - print alphabet in uppercse
 *
 * Return: 0 always(success)
 */
int main(void)
{
	char lower_alpha;
	char upper_alpha;

	lower_alpha = 'a';
	while (lower_alpha <= 'z')
	{
		putchar(lower_alpha);
		lower_alpha += 1;
	}
	for (upper_alpha = 'A'; upper_alpha <= 'Z'; upper_alpha++)
	{
		putchar(upper_alpha);
	}
	putchar('\n');
	return (0);
}
