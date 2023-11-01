#include "main.h"
/**
 * _strchr - a function that searches for the first occurence of a specific character in a string
 *  @s - string
 *  @c - character to be searched in the string
 *
 *  return: (0) if character found succesful
 */
char *_strchr(char *s, char c)
{
	int i = 0;


	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
