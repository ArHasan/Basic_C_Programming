#include<stdio.h>
int main()
{
   int num1, num2;
    printf("Enter your First number: ");
    scanf("%d",&num1);
    printf("Enter your second number: ");
    scanf("%d",&num2);
    int add = num1+num2;
    int sub = num1-num2;
    int mul = num1*num2;
    float div = (float)num1/num2;

    printf("add = %d \n",add);
    printf("sub = %d \n",sub);
    printf("mul = %d \n",mul);
    printf("div = %f\n",div);

    getch();

    }
