#include "main.h"

/**
 * _puts - this is a function that puts
 * @str: a parameter to _puts function
 * Return: return 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
