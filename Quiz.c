#include<stdio.h>
void main()
{
    int correct=0,wrong=0;
    char n1,n2,n3,n4,n5;

    printf("1.5+21 What is the output?\n a.20\tb.25\tc.27\td.26\n");
    printf("2.5+21 What is the output?\n a.20\tb.25\tc.27\td.26\n");
    printf("3.5+21 What is the output?\n a.20\tb.25\tc.27\td.26\n");
    printf("4.5+21 What is the output?\n a.20\tb.25\tc.27\td.26\n");
    printf("5.5+21 What is the output?\n a.20\tb.25\tc.27\td.26\n");

    printf("\nPlease Answer the Question\n");

    scanf("%c %c %c %c %c",&n1,&n2,&n3,&n4,&n5);
    if (n1=='d')
    {
        printf("Ans is Correct");
        correct++;
    }
    else
    {
        printf("Wrong Answer");
        wrong++;
    }
    printf("\n");
    if (n2=='d'){
        printf("Ans is Correct");
        correct++;
       }
    else
    {
        printf("Wrong Answer");
            wrong++;
        }
    printf("\n");
    if (n3=='d'){
        printf("Ans is Correct");
        correct++;
       }
    else
    {
        printf("Wrong Answer");
            wrong++;
        }
    printf("\n");
    if (n4=='d'){
        printf("Ans is Correct");
        correct++;
       }
    else
    {
        printf("Wrong Answer");
            wrong++;
        }
    printf("\n");
    if (n5=='d'){
        printf("Ans is Correct");
        correct++;
       }
    else
    {
        printf("Wrong Answer");
            wrong++;
        }
        printf("\nTotal Correct ans is =%d",correct);
        printf("\nTotal Wrong ans is =%d",wrong);
    getch();
    return 0;

}
