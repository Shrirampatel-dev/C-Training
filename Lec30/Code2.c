#include<stdio.h>
int sum(int a){
    if(a==0){
    return 0;
}
printf("%d",a);
    sum(a-1);
}  
    int main(){
        sum(5);
    }