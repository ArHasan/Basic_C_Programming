#include<stdio.h>
int main()
{
    int a,sum;
    int b;
    printf("Enter two  number: ");
    scanf("%f %d",&a,&b);
//    printf("Enter b second number: ");
//    scanf("%d",&b);

    sum=a+b;
    avg=sum/2;


    printf("The sum is =%.2f",sum);
    printf("The avg is = %f ",avg);
    return 0;
    }
