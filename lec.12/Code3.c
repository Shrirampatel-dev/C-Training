#include<stdio.h>
int main(){
    int arr[3][3]={{2,5,8},{9,6,4},{7,2,90}};
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           sum=sum+arr[i][j];
        }//printf("%d",sum);
    }printf("%d",sum);
    return 0;
}