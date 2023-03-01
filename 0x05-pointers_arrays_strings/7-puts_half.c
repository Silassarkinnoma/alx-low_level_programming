#include "main.h"
#include <stddef.h>

/**
 * put_half - function that prints half
 * @str: function parameter
 */

void puts_half(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	;

	half = i / 2;

	for (j = half; str[j] != NULL; J++)
		_putchar('%c',str[j]);
}
