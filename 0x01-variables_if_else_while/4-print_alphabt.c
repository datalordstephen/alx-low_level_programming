#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');

	return (0);
}
