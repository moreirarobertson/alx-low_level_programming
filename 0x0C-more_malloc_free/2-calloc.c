#include "main.h"
#include <stdlib.h>
/**
 * _calloc - A function that allocates memory for an array
 * @nmemb: number of elements.
 * @size: memory value size.
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
s = malloc(nmemb * size);
if (s == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
s[i] = 0;
return (s);
}
