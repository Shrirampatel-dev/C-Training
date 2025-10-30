#include<stdio.h>
int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    return arr[n-1]+sum(arr,n-1);
}
int main(){
    int arr[5]={8,8,8,8,8};
    int n=5;
    int data=sum(arr,n);
    printf("%d",data);
}