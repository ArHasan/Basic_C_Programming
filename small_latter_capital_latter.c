#include<stdio.h>
int main()
{
    printf("Enter any latter: ");
    char ch;
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
        printf("small latter");
    }
    else if(ch>='A' && ch<='Z'){
        printf("Capital latter");
    }
    else{
        printf("This is not latter");
    }
gecth();
return 0;


}
