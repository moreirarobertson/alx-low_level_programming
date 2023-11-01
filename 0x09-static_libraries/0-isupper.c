#include "main.h"
/**
*__isupper - A function that validates if a character is an uppercase one
* @c - the character to be checked
*Return : 1 if the character is uppercase and 0 if it is not
*/
int _isupper(int c)
{
    if (c >= 'A')
    {
        if (c <= 'Z')
        {
            return (1);
        }
    }
    return (0);
}
