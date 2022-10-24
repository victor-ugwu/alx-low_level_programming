#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including the terminating nu
 * l byte (\0), to the buffer pointed to by dest
 * @dest: the buffer expecting the string
 * @src: the source where the string is copied from
 * Return: dest
 */

char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
