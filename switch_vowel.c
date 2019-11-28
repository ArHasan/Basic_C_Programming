#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a any latter:");
    scanf("%c",&ch);

    switch(ch){
case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
        printf("This is vowel");
    default:
        printf("consonant");
    }

}
