// write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
    int a,b,sum,difference,product,quotient;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Quotient = %d\n", quotient);
    return 0;
}
