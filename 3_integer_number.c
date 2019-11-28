#include<stdio.h>
int main()
{
    int n1,n2,n3,sum;
    float avg;
    printf("Enter three number: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    sum=n1+n2+n3;
    printf("Sum is : %d\n",sum);
    avg=(float)sum/3;
    printf("avarage is : %.2f ",avg);
    getch();
    return 0;
}
