#include "main.h"
/**
 * _strspn - function that calculate the length of a section of a set of charcters that can be found in another set of characters 
 * @s: input string
 * @accept: input set of characters to search for in s
 *
 * Return: Length of the initial segment of s containing only characters found in accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int n = 0; 
    int r; 

    while (*s) 
    {
        for (r = 0; accept[r]; r++) 
        {
            if (*s == accept[r]) 
            {
                n++; 
                break; 
            }
            else if (accept[r + 1] == '\0') 
                return (n); 
        }
        s++; 
    }
    return (n); 
}
