#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter any two number: ");
    scanf("%d %d",&a,&b);
    sum=a-~b-1; //sum=a-(-b);
    printf("sum of two integer: %d",sum);
    getch();
}
