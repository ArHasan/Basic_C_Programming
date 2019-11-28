#include<stdio.h>
int main(){
    printf("A = ");
    int a,b;
    scanf("%d",&a);

    printf("B = ");
    scanf("%d",&b);

    if(a>b)
    {
        printf("A is grater");
    }
    else if(a<b){
        printf("B is grater");
    }
    else{
        printf("equle");
    }
}
