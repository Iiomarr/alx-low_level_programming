#include "main.h"
/**
 * _strcat - function for strings concat
 * @src: parameter
 * @dest: parameter
 * Return: Always 0
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int c = 0;

	while (dest[i])
	{
		i++;
	}
	for (c = 0; src[c]; c++)
	{
		dest[i++] = src[c];
	}
	return (dest);
}
