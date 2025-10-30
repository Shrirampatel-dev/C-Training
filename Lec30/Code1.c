#include<stdio.h>
int sum(int a){
    if(a==0){
    return 0;
}
    sum(a-1);
      printf("%d",a);
}  
    int main(){
        sum(5);
    }