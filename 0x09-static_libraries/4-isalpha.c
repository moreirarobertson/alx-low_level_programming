#include "main.h"
/**
 * _isalpha -A function that  checks for alphabetic character
 * @c: input character
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if  (c >= 'a' && c <= 'z')
	{
	     return (1); // return an integer value of 1 if its a lowercase alphabetic character.
	}
			       
       if  (c >= 'A' && c <= 'Z')
        {
             return (1); // return an integer value of 1 if its a uppercase alphabetic character.
        }			
	return (0); // if the character is not an alphabet.		
}
