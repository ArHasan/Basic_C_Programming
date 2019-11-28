#include<stdio.h>
int mian()
{
    int i=1;

    start:
        printf("%d\t",i);
        i++;

        if(i<5)
            goto start;
        return 0;
}
