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

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
