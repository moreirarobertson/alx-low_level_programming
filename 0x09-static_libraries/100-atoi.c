#include "main.h"
/**
 * _atoi - Changes a string to an integer
 * @s: The string to be converted
 * Return: The integer resulting from the conversion
 */
int _atoi(char *s)
{
    int result = 0; 
    int sign = 1;  
    int i = 0;     

    if (s[0] == '-') {
        sign = -1; 
        i = 1;     
    } else if (s[0] == '+') {
        i = 1;      
  
    }  while (s[i] != '\0') {
        if (s[i] >= '0' && s[i] <= '9') {
            result = result * 10 + (s[i] - '0');
        } else {
            break;
        }
        i++; 
    }
    return result * sign; 
}
