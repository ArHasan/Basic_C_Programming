#include<stdio.h>
int main()
{
    printf("Enter any year: ");
    int year;
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("Leap Year");
    }
    else if(year%4==0 && year%100!=0)
    {
        printf("Leap Year");
    }
    else{
        printf("Not Leap year");
    }
}
