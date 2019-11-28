#include<stdio.h>
int main(){

    int a,b,larger;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);

    larger = (a>b)? a:b;
    printf("larger number: %d",larger);


}
