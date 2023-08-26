#include "main.h"
/**
 * reverse_array - function that array numbers
 * @a: paramater for array
 * @n: paramater for array count
 * Return: Always 0.
*/
void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0; j = (n - 1); i < J; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
