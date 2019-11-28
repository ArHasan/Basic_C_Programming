#include<stdio.h>
int main()
{
  while(1){
        int num,count=0,i;
    printf("Enter any number: ");
    scanf("%d",&num);

    for(i=2;i<num;i++){
        if(num%i==0){
        count++;
        break;
    }}
    if(count==0){
        printf("prime\n");
    }
    else{
        printf("Not prime\n");
    }
    printf("count = %d",count);
    printf("\n");
  }
}
