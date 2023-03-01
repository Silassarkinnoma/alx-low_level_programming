#include "main.h"
#include <string.h>

/**
 * _-strncat - function to append charx
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
