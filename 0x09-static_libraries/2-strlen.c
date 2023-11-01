#include "main.h"
/**
 * _strlen - A function that returns the length of a string
 * @s: A string whose length is to be checked
 * Return: length of the string
 */
int _strlen(char *s)
{
    int len = 0;
    while (*s != '\0')
    {
        len++; 
        s++;
    }

    return len; 
}
