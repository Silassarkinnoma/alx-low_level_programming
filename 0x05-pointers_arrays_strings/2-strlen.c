#include "main.h"
#include <string.h>

/**
 * _strlen - function to get the length of a string
 * @s: string pointer to passed the function
 * Return: return the length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
		;

	return (i);
}
