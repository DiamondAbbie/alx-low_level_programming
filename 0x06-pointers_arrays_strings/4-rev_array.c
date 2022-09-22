#include <stdio.h>
#include "main.h"

/**
 * Reverse_array - Reverses the content of an array of integers
 * @a: An array of integers
 * @n: Number of elements to swap
 * Return: Void
 */

void reverse_array(int *a, int n)
{
int i = 0, j;
int temp;

for (i = 0; i < n - 1; i++)
{
for (j = i + 1; j > 0; j--)
{
temp = *(a + j);
*(a + j) = *(a + (j - 1));
*(a + (j - 1)) = temp;
}
}
}

