#include "main.h"
/**
 * _strstr - A function that searches for the first occurence of a character wihin a sub string in a given string
 * @haystack: string
 * @needle: substring
 * Return: 0 (success)
 */
char *_strstr(char *haystack, char *needle)
	{
	for (; *haystack != '\0'; haystack++) 
	{
		char *h = haystack; 
		char *n = needle; 

		while (*h == *n && *n != '\0') 
		{
			h++;
			n++;
		}
                
		if (*n == '\0')
			return (haystack);
	}

	return (0);
} 
