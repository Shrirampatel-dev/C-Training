#include<stdio.h>
int main()
{
   int n=4,m=4,i,j;
//   printf("Enter no. of n");
//   scanf("%d",&n);
   printf("Enter no. of rows:");
   scanf("^d",&i);
   printf("Enter no. column:");
   scanf("%d",&j);
   {
   for(i=0;i<n;i++)
   {
      for(j=0;j<m;j++)
      {
         printf(" * ");
      }
   }
   }
   return 0;
   
}