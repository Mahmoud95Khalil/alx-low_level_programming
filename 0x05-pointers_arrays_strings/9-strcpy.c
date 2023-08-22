#include "main.h"

/**
 * _strcpy - copies the string
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
	int i = -1;

	do {
		i++;
		dest[i] = scr[i];
	} while (scr[i] != '\0');

	return (dest);
}
