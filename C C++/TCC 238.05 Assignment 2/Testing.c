// Using Arithmetic Operation
#include<stdio.h>
int main()
{
    float a,b, sum, diff ,product ;
    printf("Enter a: ");
    scanf("%f" ,&a);
    printf("Enter b: ");
    scanf("%f", &b);
    

    sum = a+b;
    printf("a+b = %0.2f\n" ,sum);

    diff = a-b;
    printf("a-b = %0.2f\n" ,diff);

    product = a*b;
    printf("a*b = %0.2f\n" ,product);


}