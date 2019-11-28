#include<stdio.h>
#include<conio.h>
void main()
{
    int i,N;
    long sum=0;
    printf("\nEnter last number of series.");
    scanf("%d",&N);
    printf("1+2+3+.....+%d=",N);
for (i=1;i<=N;i=i+1)
{
    sum=sum+i;
}
printf("%1d",sum);
getch();
}
