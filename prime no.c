#include<stdio.h>
int main()
{
    while(1){
    int i,n;
    printf("Please Enter a Number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
        if(n%i==0)
        break;
    if(i==n)
        printf("This is a prime number");
    else
        printf("This not a prime number");
        printf("\n");}

    return 0;
}
