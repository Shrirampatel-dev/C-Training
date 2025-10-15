#include<stdio.h>
int main(){
   int arr1[5]={1,2,3,4,5};
   int arr2[5]={1,2,3,4,5};
   int *p1=arr1;
   int *p2=arr2;
   int flag=1;
   int i;
   for(i=0;i<5;i++){
    if(*(p1+i)!= *(p2+i)){
        flag=0;
        break;
    }
   }
  return 0;
}