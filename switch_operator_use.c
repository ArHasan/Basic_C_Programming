#include<stdio.h>
int main()
{

    char c;
    printf("Choice your operator(+, -, *, / ):  ");
    scanf("%c",&c);

    int a,b;
    printf("Enter two number: \n");
    scanf("%d %d",&a,&b);



    switch(c)
    {
    case '+':
        printf(" %d + %d = %d",a,b,a+b);
        break;
    case '-':
        printf(" %d - %d = %d",a,b,a-b);
        break;
    case '*':
        printf(" %d * %d = %d",a,b,a*b);
        break;
    case '/':
        printf(" %d / %d = %d",a,b,a/b);
        break;
    default:
        printf("This is not latter");
    }
getch();
return 0;
}
