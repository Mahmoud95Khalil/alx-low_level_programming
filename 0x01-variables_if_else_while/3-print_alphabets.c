#include <stdio.h>
/**
 * main -lowercase and uppercase alphabets
 *
 * Return: 0 (success)
 *
 */

int main(void)

{
char ch = 'a';
char Ch = 'A';

while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (Ch <= 'z')
{
putchar(Ch);
Ch++;
}
putchar('\n');
return (0);
}
