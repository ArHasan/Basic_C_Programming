#include<stdio.h>
int main()
{
    int x=10,y=20,z=30,k;
    k = (x+y)>z&&(y+z)>x;
    printf("The result is = %d ",k);
    getch();
    return 0;
}
