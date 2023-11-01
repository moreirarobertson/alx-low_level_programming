#include "main.h"
/**
 * __strncpy - copies a section of a string from source 'src' to destination 'dest'
 * @dest: pointer to the destinaion buffer 
 * @src: pointer to the source string from which characters will be copied from
 * @n: maximum number of characters to be copied from the string
 *
 * Return: pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{	
 int i;

 for (i = 0; i < n; i++)
 { 
    if (src[i] == '\0')
        break;

    dest[i] = src[i];
 } 

 for (; i < n; i++)
 {
    dest[i] = '\0';
 }

 return (dest);
}
