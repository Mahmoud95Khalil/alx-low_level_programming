#include "main.h"

/**
 * *_strcpy - copies the string
 *
 * @dest: char type string
 * @src: char type string
 * description: copy the string
 * the buffer pointed to by 'dest'
 *
 * Return: pointer to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
