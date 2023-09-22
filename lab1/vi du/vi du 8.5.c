#include <stdio.h>
#include <conio.h>
//int vd23()
    int main()
{
      int num1,num2, res;
      char op;
      num1 = 90;
      num2 = 33;
      op ='-';
      fflush(stdin);
      scanf("%c", &op);
      switch (op)
      {
      case '+':
        res = num1 + num2;
        printf("\nTHe Sum is: %d", res);
        break;
      case '-':
        res= num1 - num2;
        printf("\nNumber after subtraction: %d",res);
        break;
      case '/':
        res = num1 / num2;
        printf("\nNumber after division: %d", res);
        break;
      case '*':
        res = num1 * num2;
        printf("\n Number after multiplication: %d", res );
        break;
      default:
        printf("\n Invalid");
        break;

      }
    }