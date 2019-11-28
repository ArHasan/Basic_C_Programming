#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the a b value: ");
    scanf("%d %d",&a,&b);
    int result=a*a+2*a*b+b*b;
    printf("Answer is : %d",result);
}
