#include "main.h"
#include <stdlib.h>
/**
 * str_concat - joins two strings
 * @s1: The first input string
 * @s2: The second input string
 * Return: The pointer to the array or return NULL on failure
 */
char *str_concat(char *s1, char *s2)

{
char *merg;
int i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = j = 0;
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
merg = malloc(sizeof(char) * (i + j + 1));
if (merg == NULL)
return (NULL);
i = j = 0;
while (s1[i] != '\0')
{
merg[i] = s1[i];
i++;
}
while (s2[j] != '\0')
{
merg[i] = s2[j];
i++, j++;
}
merg[i] = '\0';
return (merg);
}
