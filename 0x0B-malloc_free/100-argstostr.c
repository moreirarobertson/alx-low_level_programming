#include "main.h"
#include <stdlib.h>
/**
* *argstostr - merge all the arguments of the program
* @ac: number of arguments
* @av: array of arguments
* Return:  a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)

{
int i, n, j = 0, l = 0;
char *s;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
l++;
}
l += ac;
s = malloc(sizeof(char) * l + 1);
if (s == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
{
s[j] = av[i][n];
{
s[j] = av[i][n];
j++;
}
if (s[j] == '\0')
{
s[j++] = '\n';
}
}
}
return (s);
}
