#include "main.h"
#include <stdio.h> 

/**
 * _strcat - Concatenates two strings together
 * @dest: The destination value
 * @src: The source value
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int dlen = 0, i;
while (dest[dlen])
{
dlen++;
}
for (i = 0; scr[i] != 0; i++)
{
dest[dlen] = src[i];
dlen++;
}
dest[dlen] = '\0';
return (dest);
} 
