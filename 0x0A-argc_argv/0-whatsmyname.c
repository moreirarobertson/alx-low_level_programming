#include <stdio.h>

#include "main.h"

/**
* main - prints the name of the program
* @argc: number of arguments
* @argv: array of arguments
* Return: Always return  0 on Success
*/
int main(int argc __attribute__((unused)), char *argv[])

{
printf("%s\n", *argv);
return (0);
}
