// Write a program to check if a number is prime.
#include <stdio.h>
int main()
{
int n,i,count=0;
printf("Enter a no:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%1==0)
  count++;
}
 if(count==2)
   printf("Prime no");
else
printf("Not a prime no");

return 0;
}
