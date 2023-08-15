#include "main.h"
/**
 * print_alphabet_x10- printing character 10timesby loop
*/

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_puchar('\n');
	}
}
