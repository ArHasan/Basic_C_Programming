#include<stdio.h>
#include<math.h>
int main(){
    float radius,area;
    printf("Enter radius: ");
    scanf("%f",&radius);
    area=M_PI*radius*radius;
    printf("Result is: %f",area);
}
