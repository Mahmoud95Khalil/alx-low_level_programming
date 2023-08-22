#include "main.h"

/**
 * print_rev - prints reversed string follosed by new line
 *
 * @s: points the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
