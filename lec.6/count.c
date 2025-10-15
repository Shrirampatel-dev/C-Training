//digit count

#include<stdio.h>
int main()
{
   int n;
   int count=0;
   printf("Enter the no. to digit count:");
   scanf("%d",&n);
   if(n==0)
   {
    count=1;
   }
   while (n>0)
   {
    count++;
    n=n/10;
    
   }
   printf("%d",count);
   return 0;
}