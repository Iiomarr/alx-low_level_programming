#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: all alphabets in lowercase using while
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		Putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}