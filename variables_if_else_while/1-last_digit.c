#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* the program will assigned a random number to the variable n */

int main(void)
{
  int n ;
  srand(time(0));
  n = rand() - RAND_MAX / 2;

if(n > 5)
{
  printf("Last digit of %d is %d and is greater than 5\n", n, n);
}
else 

  if (n == 0)
  {
printf("Last digit of %d is %d and is 0\n", n, n);
  }
else 
if (n < 6)
{
printf("Last digit of %d is %d and is less than 6 and 0\n", n, n);
}
return (0);

}

