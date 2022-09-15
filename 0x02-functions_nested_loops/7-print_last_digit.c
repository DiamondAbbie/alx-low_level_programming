#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * @n: The number in question.
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
int p = n % 10;
if (p < 0)
p = (-1 * p);
_putchar(p + '0');
return (p);
}

