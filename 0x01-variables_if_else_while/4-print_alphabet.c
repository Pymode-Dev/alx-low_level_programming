#include <stdio.h>

/**
 * main - prints alphabet in lowercase without q and e
 *
 * Return: Awlays 0.
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar('\n');

	return (0);
}
