#include "main.h"
/**
 * _isalpha - function to print lower case
 *
 * c: parameter to be printed
 *
 * return: return 1 if success or 0 if failed
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
