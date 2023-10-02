#include "main.h"

/**
 * char*_strcpy - a function that copies the string pointed to by src
 * @dest : destination parameter
 * @src: source parameter
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (; i <= len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
