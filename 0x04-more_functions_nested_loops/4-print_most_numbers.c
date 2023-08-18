#include "main.h"
/**
 * print_most_numbers - rints the numbers, from 0 to 9, followed by a new line
 *
 * Return: 0 (success)
*/

void print_most_numbers(void)
{
	int c;

	for (c = 48 ; c <= 57; c++)
	{
		if (c == 50 || c == 52)
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
