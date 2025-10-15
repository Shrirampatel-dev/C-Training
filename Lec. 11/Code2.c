#include<stdio.h>
int main(){
    int arr[5]={1,3,6,2,9};
    int *p=arr;
    printf("%d",*(p));
    printf("%d",*(p+1));
    printf("%d",*(p+2));
    printf("%d",*(p+3));
    return 0;
}