#include<stdio.h>

    int magic(n){
       int sum=0,remainder,sum1,remainder1;
       while (n!=0)
       {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
       }
     //  printf("%d",sum);
     if(sum<10){
        while (sum!=0)
        {
        remainder = sum%10;
        sum1 += remainder;
        sum /= 10;
        }printf("%d",sum1);
        
     }

       
    } 

    int main(){
        int n;
        printf("Enter no. to check");
        scanf("%d",n);
        magic(n);
    }