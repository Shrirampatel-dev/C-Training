// Fabonacci series

#include<stdio.h>
int main()
{
    int n;
    int t1=0;
    int t2=1;
    int next;
    printf("enter the number to print");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",t1);
        next=t1+t2;
        t1=t2;
        t2=next;
    }
    return 0;
}