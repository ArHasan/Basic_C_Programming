#include<stdio.h>
int main()
{
    int i;
    float f;
    double d;
    short s;
    long l;
    char c;

    printf("integer size is %d \n:",sizeof(i));
    printf("float size is %f \n:",sizeof(f));
    printf("double size is %lf \n:",sizeof(d));
    printf("short size is %d\n:",sizeof(s));
    printf("short size is %c\n:",sizeof(c));
}
