#include <stdio.h>
int main(){/*{
    int i,n,m,prime=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(m=2;m<i;m++){
        if(i%m!=0)
        prime++;
            }
    printf("")
    printf("\n");
    */
    int i,n;
    scanf("%d",&i);
    for(n=2;n<i;n++)
    {
        if(i%n==0)
            printf("%d is a prime number ",i);
     break;
    }

    return 0;
    }
