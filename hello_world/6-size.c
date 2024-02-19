#include <stdio.h>

/**
* main -Prints " size of various types on the computer it is compiled and run on."
* Return: 0.
*/

int main(void)
{
printf("size of a char: %zu byte(s)\n", Sizeof(char));
printf("size of a int: %zu byte(s)\n", Sizeof(int));
printf("size of a long int: %zu byte(s)\n", Sizeof(long int));
printf("size of a long long int: %zu byte(s)\n", Sizeof(long long int));
printf("size of a float: %zu byte(s)\n", Sizeof(float));
return (0);
}


