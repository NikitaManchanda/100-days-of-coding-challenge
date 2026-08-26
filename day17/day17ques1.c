//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main()
{
int n,original,sum=0,rem;
printf("Et=nter a no:");
scanf("%d",&n);
original=n;
while(n!=0)
{
rem=n%10;
sum=sum+rem*rem*rem;
n=n/10;
}
if(original==sum)
 printf("Armstrong no:");
else
 printf("Not a Armstrong no:");
return 0;
}
