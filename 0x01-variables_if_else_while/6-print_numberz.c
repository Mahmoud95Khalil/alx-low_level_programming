#include <stdio.h>
/**
 * main - digit 9 to 0 putchar
 * Return: 0
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar("\n");
	return (0);
}
