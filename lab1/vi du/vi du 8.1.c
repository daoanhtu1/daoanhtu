#include <stdio.h>
int vd1()
//int main()
{
  float com =0,sales_amt;
  printf("Enter the Sale Amount: ");
  scanf("%f", &sales_amt);
  if(sales_amt >= 10000)
    com = sales_amt * 0.1;
  printf("\n Commission = %f", com);

}