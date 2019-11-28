#include<stdio.h>
int main()
{
    char l,o,w,e,r;
    printf("Enter the lower case latter: ");
    scanf("%c %c %c %c %c",&l,&o,&w,&e,&r);
    printf("Your latter is : %c%c%c%c%c",l-32,o-32,w-32,e-32,r-32);
    getch();
}
