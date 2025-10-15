#include<stdio.h>
int main(){
    int arr[8]={1,4,2,6,4,7,3,2};
    int k=7;
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
           if(arr[i]+arr[j]==k){
            printf("%d %d",i,j);}
        }
    }
    return 0;
}