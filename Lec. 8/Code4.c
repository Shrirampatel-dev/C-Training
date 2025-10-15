#include<stdio.h>

    int mul(){
        int a=4;
        int b=5;
        int c=a*b;
//        printf("%d",c);
        return c;
    }

    int main(){
        int data=mul();
        printf("%d",data);
    }