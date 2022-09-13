#include <stdio.h>

/**                                                                      
 * main - entry point                                                    
 * Return: Always 0 (success)                                            
 */

int main(void)                                                           
{                                                                        
int char1 = sizeof(char);
int int1 = sizeof(int);
int long_int = sizeof(long int);
int longLong = sizeof(long long int);
int float1 = sizeof(float);

printf("Size of a char: %d byte(s)\n", char1);       
printf("Size of an int: %d byte(s)\n", int1); 
printf("Size of a long int: %d byte(s)\n", long_int);
printf("Size of a long long int: %d byte(s)\n", longLong);
printf("Size of a float: %d byte(s)\n", float1);     

return (0);
}	    
