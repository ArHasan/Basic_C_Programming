#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three number: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("A is grater");
    }
    else if (b>a && b>c)
    {
        printf("B is grater");
    }

    else if (c>a && c>b)
    {
        printf("c is grater");
    }
    else{
        printf("numbers are equal");
    }
}
