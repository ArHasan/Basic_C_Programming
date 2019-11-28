#include<stdio.h>
int main()
{
        printf("Enter any Number: ");
        int n;
        scanf("%d",&n);

        if(n%2==0)
        {
            printf("Even");
        }
        if(n%2!=0){
            printf("Odd");
        }
        getch();
        return 0;
}
