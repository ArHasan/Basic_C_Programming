#include<stdio.h>
int main()
{

    printf("Enter n number: ");
    int i,n,sum=0;
    scanf("%d",&n);

    for(i=2;i<=n;i=i+2){
       sum=sum+i;
       printf("%d\n",i);
    }
    printf("%d",i);
}
