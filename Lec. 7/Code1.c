#include<stdio.h>
int main()
{
    for (int i=0;i<4;i++){
        for (int j=0;j<=i;j++){
            printf("*");
        }
        for (int k=4;k>i;k--){
            printf(" ");
        }
        for (int m=4;m>i;m--){
            printf(" ");
        }
        for (int n=0;n<=i;n++){
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}