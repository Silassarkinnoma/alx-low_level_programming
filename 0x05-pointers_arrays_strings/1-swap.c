#include "main.h"

/**
 * swap_int - swap the values of two given integer
 * @a: parameter 1
 * @b: parameter 2
 * Return: return 0
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
