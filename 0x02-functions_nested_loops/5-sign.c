#include "main.h"
/**
  * print_sign - function to check for a sign
  * @n:  the integer used for argument
  * Return: 0
  */

int print_sign(int n)
{

	if (n > 0)
	{
	_putchar ('+');
	return (1);
	}

	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
