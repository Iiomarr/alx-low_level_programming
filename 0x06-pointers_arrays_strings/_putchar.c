#include <unistd.h>
#include "main.h"

/**
 * _putchar- writes a character c to stdout
 *
 * @c: The Character to print
 *
 * Return: on Success 1 on error, -1 is returned
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
