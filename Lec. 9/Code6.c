#include<stdio.h>
int main(){
    int arr[5]={44,3,6,77,88};
    int a=6;
    for(int i=0;i<5;i++){
        if(arr[i]==a){
            printf("%d",arr[i]);
            break;
        }
    } 

    return 0;
}