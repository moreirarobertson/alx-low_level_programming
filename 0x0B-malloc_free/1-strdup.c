#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup -  A function that returns a pointer to a new
 * string which is a duplicate of the string str
 * @str: input char
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)

{
char *dup;
int i, j = 0;

if (str == NULL)
return (NULL);

i = 0;
while (str[i] != '\0')
i++;

dup = malloc(sizeof(char) * (i + 1));

if (dup == NULL)
return (NULL);

for (j = 0; str[j]; j++)
dup[j] = str[j];
return (dup);
}
