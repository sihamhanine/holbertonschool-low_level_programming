#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* the program will assigned a random number to the variable n */

int main(void)
{
  int n,r;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  r = n % 10;

if(n>5)

  printf("Last digit of %d is %d and is greater than 5\n", n, r);

else 

  if (n==0)
printf("Last digit of %d is %d and is 0\n", n,r);
else 
if (n<6)
printf("Last digit od %d is %d ans is less than 6 and 0\n", n,r);

return (0);

}
