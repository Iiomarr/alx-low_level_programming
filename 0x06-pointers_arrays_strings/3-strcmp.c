#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: str1
 * @s2: str2
 * Return: 1 if true and 0 if false
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1)
	{

	if (*s1 != *s2)
	{
		i = ((int)*s1 - 48) - ((int)*s2 - 48);
		break;
	}
	s1++;
	s2++;
	}
	return (i);
}
