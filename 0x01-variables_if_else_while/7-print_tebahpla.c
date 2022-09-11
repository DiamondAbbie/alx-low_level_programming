#include <stdio.h>

/**
* main - prints English alphabets in lowercase using PUTCHAR alone
* Return: Always 0 (SUCCESS)
*/

int main(void)
{
char alphabet[26] = "zyxwvutsrqponmlkjihgfedcba";
int i;

for (i = 0; i < 26; i++)
{
putchar(alphabet[i]);
}

putchar('\n');

return (0);

}
