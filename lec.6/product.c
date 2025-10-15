//digit product

#include<stdio.h>
int main()
{
   int n;
   int product=1;
   int digit;
   printf("Enter the no.:");
   scanf("%d",&n);
   if(n==0){
      product=0;
   }else 
   while (n>0)
   {
      digit = n % 10;
      product *= digit;
      n = n / 10;
   }

   printf("%d",product);
   return 0;
}