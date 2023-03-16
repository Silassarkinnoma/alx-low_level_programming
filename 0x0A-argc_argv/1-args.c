#include <stdio.h>
/**
 * main - prints number of arguments passed
 * @argc: first parameter
 * @argv: second parameter
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc -1);
	return (0);
}

