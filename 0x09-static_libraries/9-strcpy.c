#include "main.h"
/**
 * _strcpy - A function that makes a copy of a string
 * @dest: address of destination to copy string to
 * @src: address of string to be copied from
 *
 * Return: the pointer to resulting destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
        
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0'; 

	return (dest); 
}
