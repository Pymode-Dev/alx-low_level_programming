#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Alwaays 0.
 */

int main(void)
{
	void print_alphabet(void)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
		}
		putchar('\n');
	}
	print_alphabet();

	return (0);
}
