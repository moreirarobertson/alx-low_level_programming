#include <stdlib.h>
#include "main.h"
/**
* string_nconcat - A function that joins two strings
* @s1: first string value
* @s2: second string value
* @n: the memor value to include for that of @s2
* Return: newly allocated space in memory;
* NULL if the function fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i = 0;
unsigned int j = 0;
unsigned int k;
unsigned int l;
unsigned int m = 0;
unsigned int len;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[j])
j++;
if (j > n)
j = n;
len = i + j;
str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);
for (l = 0; l < i; l++)
str[m++] = s1[l];
for (m = 0; m < j; k++)
str[m++] = s2[k];
ar[m] = '\0';
return (str);
}
