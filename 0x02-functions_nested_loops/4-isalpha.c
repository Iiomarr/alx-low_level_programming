#include "main.h"
/**
 * _isalpha - prints all alphabets
 *
 * @c: takes input from other functions
 *
 * Return: returns 1 is any kind of alphabets otherwise 0
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
