#include "main.h"
/**
 * _islower -check if characters in lower case
 *
 * @c:checks input function
 *
 * Return: returns 1 is lowercasr other wise return 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
