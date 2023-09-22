#include <stdio.h>
int vd()
//int main()
{
  int num1,num2;
  num1 = 77;
  num2 = 90;
  if (num1 == num2)
    printf("\nThe numbers are equal");
  else if (num1 <num2)
    printf("\n The larger number is: %d", num2);
  else
    printf("\nther larger number is: %d", num1);
}