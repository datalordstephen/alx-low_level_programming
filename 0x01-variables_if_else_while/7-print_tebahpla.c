#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
