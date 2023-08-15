#include "main.h"
/**
 * print_last_digit- print last digit
 *
 * @n: number type
 *
 * Return: 0 (SUccess)
*/
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = (-1) * (n % 10);
	else
		lastDigit = n % 10;
	_putchar(lastDigit + 48);
	return (lastDigit);
}

