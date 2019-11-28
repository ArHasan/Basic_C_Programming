#include<stdio.h>
int main()
{
    printf("Enter your favorite number: ");
    int num ;
    scanf("%d",&num);

    if(num>0)
    {
        printf("positive");
    }
    else if(num<0)
    {
        printf("negative");
    }
    else
    {
        printf("number is zero");
    }
}
