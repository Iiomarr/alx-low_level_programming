#include "main.h"
/**
 * _strncat - function to append characters
 * @src: parameter
 * @dest: parameter
 * @n: parameter
 * Return: Always 0
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (src[j] != '\n' && j < n)
		dest[i++] = src[j++];
	return (dest);
}

