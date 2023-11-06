#include <stdio.h>
#include "main.h"
/**
* _atoi - converts a string to an integer
* @s: input string
* Return: the int converted from the string
*/
int _atoi(char *s)
{
int i, x, y, len, z, digit;
i = 0;
x = 0;
y = 0;
len = 0;
z = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (i < len && z == 0)
{
if (s[i] == '-')
++y;
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
y = y * 10 + digit;
z = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
z = 0;
}
i++;
}
if (z == 0)
return (0);
return (n);
}
/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
int result, num1, num2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 *num2;
printf("%d\n", result);
return (0);
}
