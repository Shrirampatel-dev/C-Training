#include<stdio.h>

    int even(n){
        if (n%2== 0){
        printf("It is even no.");}
        else { printf("It si odd no.");}

    }

    int main(){
        int n;
        printf("Enter no. to check");
        scanf("%d",&n);
        even(n);
    }