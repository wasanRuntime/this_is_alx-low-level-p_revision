#include <stdio.h>
/**
 * main - print alphabet in uppercse
 *
 * Return: 0 always(success)
 */
int main(void)
{
	char lower_alpha;

	lower_alpha = 'a';
	while (lower_alpha < 'z')
	{
		if (lower_alpha != 'e' || lower_alpha != 'q')
		{
			putchar(lower_alpha);
		}
		lower_alpha += 1;
	}
	putchar('\n');
	return (0);
}
