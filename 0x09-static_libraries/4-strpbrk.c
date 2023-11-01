#include "main.h"
/**
 * _strpbrk - A function search  for the first occurence of set of characters in anoter string
 * @s:string to be searched
 * @accept: set of characters 
 * Return: 0 if sucessful
 */
char *_strpbrk(char *s, char *accept)
{
	int k; 

	while (*s) 
	{
		for (k = 0; accept[k]; k++) 
		{
		if (*s == accept[k])
		return (s);
	}
	s++; 
	}
               return ('\0'); 
}
