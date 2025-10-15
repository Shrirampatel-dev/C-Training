#include<stdio.h>
int swap(int *x,int *y){
*x=*x+*y;
*y=*x-*y;
*x=*x-*y;
printf("%d%d",*x,*y);
}

int main(){
    int a=10, b=20;
    printf("value after swaping : ");
    swap(&a, &b);
 //   printf("%d",z);
    return 0;
}