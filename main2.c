#include <stdio.h> 
int main (void)
{
  int x,y;
  //get two values from user
  scanf("%d %d",&x,&y);
  //calculate and print
  printf("Sum: %d\n", x+y);
  printf("Difference: %d\n", x-y);
  printf("Product: %d\n", x*y);
  printf("Quotient: %d\n", x/y);
  printf("Remainer: %d\n", x%y);
  return 0;
}