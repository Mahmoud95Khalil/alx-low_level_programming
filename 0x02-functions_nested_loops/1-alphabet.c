#include "main.h"

/**
 *Description: print_alphabt - function that prints the alphabet, in lowercase
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
}
