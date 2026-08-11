//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main()
{
float pie=3.14;
int radius;
printf("enter radius");
scanf("%d",&radius);

printf("Area=%f,Circumference=%f",pie*radius*radius,2*pie*radius);
return 0;
}
