#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(marks>=80)
    {
        printf("congratulation you will chance");
    }
    else if(marks>=33)
    {
        printf("waiting");
    }
    else
    {
        printf("fill");
    }

}
