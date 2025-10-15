#include<stdio.h>
int main(){
    int arr[5]={44,3,6,77,88};
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    } printf("%d",max);
    return 0;
}