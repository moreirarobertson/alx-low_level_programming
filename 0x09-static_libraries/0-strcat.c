#include "main.h"
/**
 *_strcat - joins to strings together
 * @dest - input destination 
 * @src - input source
 *
 * return - print resulting string
 */
 char *_strcat (char *dest, char *src)
{
   while(*dest != '\0') {
     dest++;
  }

   while(*src != '\0') {
     *dest++ = *src++;
  }

   *dest = '\0';

   return dest;
}
