#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0 if successful or 1 if failed
 */
int main(void)
{
int a;
char b;
float c;
long int d;
long long int e;

printf("size of a int: %lu byte(s)\n", (sizeof(a)));
printf("size of a char: %lu byte(s)\n", (sizeof(b)));
printf("size of a fload: %lu byte(s)\n", (sizeof(c)));
printf("size of a long int: %lu byte(s)\n", (sizeof(d)));
printf("size of a long long int: %lu byte(s)\n", (sizeof(e)));
Return (0);
}
