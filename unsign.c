#include <stdio.h>
main()
{
    int a=4,b=5,c;
    c=if (a%2==0&&b/2==5)||(a<b)?a:b;
    printf("c=%d",c);
    return 0;
}
