#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0 if success
 */
int main(void)
{
char i;

for (i = 'a' ; i <= 'Z' ; i++)
	if (i != 'q' && i != 'e')
		putchar(i);
putchar('\n');
return (0);
}
