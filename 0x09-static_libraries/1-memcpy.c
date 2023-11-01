#include "main.h"
/**
 * _memcpy - this function copies a block of memory from source to destination
 * @dest - this shows your memory location you want to copy data to
 * @src - this shows your memory location you want to copy data from
 * @n - unsigned integer representing the number of nytes to copy
 *
 * return: a reference to memory area of dest
 */
 char *_memcpy(char *dest, char *src, unsigned int n)
 {
      unsigned int i; 
        
       for (i = 0; i < n; i++)
              dest[i]=src[i]; 
       
       return dest;
 }
